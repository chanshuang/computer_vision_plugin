#ifndef WIP_CONNECT_H
#define WIP_CONNECT_H

#include <QObject>
#include    <QTcpSocket>
#include    <QLabel>


class WIp_Connect : public QObject
{
    Q_OBJECT
private:

     QObject* wparent;
     QString addr;
     quint16 port;
public:
    void wInidata(QObject* pParent,QString _addr,quint16 _port);
    explicit WIp_Connect(QObject *parent = nullptr);

    QTcpSocket  *tcpClient;  //socket
signals:
    //void wstartConnect();
public slots:
    void wConnect();
    void wDisconnect();
    void wSendData(QString str);
};

#endif // WIP_CONNECT_H
