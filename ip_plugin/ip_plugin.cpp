
#include "ip_plugin.h"
#include "ui_plugin.h"


#include <QMessageBox>
#include <QDebug>

#include <QHostAddress>
#include <QHostInfo>


Ip_Plugin::Ip_Plugin()
{
    // Insert initialization codes here ...
    thread_connect = new WIp_Connect();
    thread_connect->moveToThread(new QThread(this));

    connect(this,
            SIGNAL(wstartConnect()),
            thread_connect,
            SLOT(wConnect()));
    connect(thread_connect->thread(),
            SIGNAL(started()),
            thread_connect,
            SLOT(wConnect()));
    connect(this,
            SIGNAL(wendConnect()),
            thread_connect,
            SLOT(wDisconnect()));
    connect(this,
            SIGNAL(wsendData(QString)),
            thread_connect,
            SLOT(wSendData(QString)));


    connect(thread_connect->tcpClient,SIGNAL(connected()),this,SLOT(onConnected()));
    connect(thread_connect->tcpClient,SIGNAL(disconnected()),this,SLOT(onDisconnected()));

    //connect(tcpClient,SIGNAL(stateChanged(QAbstractSocket::SocketState)),
    //        this,SLOT(onSocketStateChange(QAbstractSocket::SocketState)));
    connect(thread_connect->tcpClient,SIGNAL(readyRead()),
            this,SLOT(onSocketReadyRead()));

}

Ip_Plugin::~Ip_Plugin()
{
    if(thread_connect!=NULL)
    {
        //thread_connect->stopVideo();
        thread_connect->thread()->quit();
        thread_connect->thread()->wait();
    }
}




void Ip_Plugin::setupUi(QWidget *parent)
{
    ui = new Ui::PluginGui;
    ui->setupUi(parent);

    QString localIP=getLocalIP();
    ui->ipLocalShow->setText("本机 IP:  "+localIP);

    // Connect signals for GUI elemnts manually here since they won't be connected by name in a plugin
    connect(ui->pushButtonConnect,
            SIGNAL(pressed()),
            this,
            SLOT(on_pushButtonConnect_pressed()));
    connect(ui->pushButtonDisconnect,
            SIGNAL(pressed()),
            this,
            SLOT(on_pushButtonDisconnect_pressed()));
    connect(ui->pushButton,
            SIGNAL(pressed()),
            this,
            SLOT(on_pushButton_pressed()));
    connect(ui->btnSend,
            SIGNAL(pressed()),
            this,
            SLOT(on_btnSend_pressed()));
    if(thread_connect != NULL)
    {
        thread_connect->thread()->start();
    }

}

void Ip_Plugin::on_pushButtonConnect_pressed()
{
    //QMessageBox::information(NULL,"WTJ","Connect",QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    thread_connect->wInidata(this,ui->comboServer->currentText(),ui->spinPort->value());
    emit wstartConnect();
}

void Ip_Plugin::on_pushButtonDisconnect_pressed()
{
    emit wendConnect();
    //QMessageBox::information(NULL,"WTJ","Disconnect",QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
}

void Ip_Plugin::on_pushButton_pressed()
{
    ui->plainTextEdit->clear();
}
QString Ip_Plugin::getLocalIP()
{
    QString hostName=QHostInfo::localHostName();
    QHostInfo hostInfo = QHostInfo::fromName(hostName);
    QString   localIP = "";
    QList<QHostAddress> addList = hostInfo.addresses();//

    if (!addList.isEmpty())
    for (int i=0;i<addList.count();i++)
    {
        QHostAddress aHost=addList.at(i);
        if (QAbstractSocket::IPv4Protocol==aHost.protocol())
        {
            localIP=aHost.toString();
            break;
        }
    }
    return localIP;
}
void Ip_Plugin::onConnected()
{ //connected()信号槽函数
    ui->plainTextEdit->appendPlainText(" **已连接到服务器 ");
    ui->plainTextEdit->appendPlainText("**peer address:"+
                                   thread_connect->tcpClient->peerAddress().toString());
    ui->plainTextEdit->appendPlainText("**peer port:"+
                                   QString::number(thread_connect->tcpClient->peerPort()));
    //ui->actConnect->setEnabled(false);
    //ui->actDisconnect->setEnabled(true);
}

void Ip_Plugin::onDisconnected()
{//disConnected()信号槽函数
    ui->plainTextEdit->appendPlainText("**已断开与服务器的连接 ");
    //ui->actConnect->setEnabled(true);
    //ui->actDisconnect->setEnabled(false);
}

void Ip_Plugin::onSocketReadyRead()
{//readyRead()信号槽函数
    while(thread_connect->tcpClient->canReadLine())
        ui->plainTextEdit->appendPlainText("[in] "+thread_connect->tcpClient->readLine());
}

void Ip_Plugin::on_btnSend_pressed()
{
    QString  msg=ui->editMsg->text();
    ui->plainTextEdit->appendPlainText("[out] "+msg);
    ui->editMsg->clear();
    ui->editMsg->setFocus();

    //QByteArray  str=msg.toUtf8();
    //str.append('\n');
    emit wsendData(msg);
}
