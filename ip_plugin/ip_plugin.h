#ifndef IP_WPLUGIN_H
#define IP_WPLUGIN_H

#include "wip_connect.h"
#include "ip_plugin_global.h"
#include "plugininterface.h"
#include <QThread>

namespace Ui {
    class PluginGui;
}

class IP_PLUGINSHARED_EXPORT Ip_Plugin: public QObject, public ipPluginInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "com.ipdata.plugininterface")
    Q_INTERFACES(ipPluginInterface)
public:
    Ip_Plugin();
    ~Ip_Plugin();

    void setupUi(QWidget *parent);

signals:
    void updateNeeded();
    void errorMessage(QString msg);
    void infoMessage(QString msg);
    void wstartConnect();
    void wendConnect();
    void wsendData(QString str);
private slots:
    void on_pushButtonConnect_pressed();

    void on_pushButtonDisconnect_pressed();

    void on_pushButton_pressed();

    void    onConnected();
    void    onDisconnected();
    //void    onSocketStateChange(QAbstractSocket::SocketState socketState);
    void    onSocketReadyRead();//读取socket传入的数据

    void on_btnSend_pressed();

private:
    Ui::PluginGui *ui;
    QString getLocalIP();
    WIp_Connect *thread_connect;
};

#endif // IP_WPLUGIN_H
