#include "wip_connect.h"
#include "ip_plugin.h"
#include <QMessageBox>
WIp_Connect::WIp_Connect(QObject *parent) : QObject(parent)
{
    tcpClient=new QTcpSocket(this); //创建socket变量
    //wparent = (Ip_Plugin *)parent;


}
void WIp_Connect::wConnect()
{
     //QMessageBox::information(NULL,"WTJ","WWWW text",QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    // 连接到服务器
        tcpClient->connectToHost(addr,port);

    //    tcpClient->connectToHost(QHostAddress::LocalHost,port);
}
void WIp_Connect::wInidata(QObject* pParent,QString _addr,quint16 _port)
{
    wparent = pParent;
    addr=_addr;
    port=_port;
}

void WIp_Connect::wDisconnect()
{
    //断开与服务器的连接
        if (tcpClient->state()==QAbstractSocket::ConnectedState)
            tcpClient->disconnectFromHost();
}

void WIp_Connect::wSendData(QString msg)
{
    QByteArray  str=msg.toUtf8();
    str.append('\n');
    tcpClient->write(str);
}
