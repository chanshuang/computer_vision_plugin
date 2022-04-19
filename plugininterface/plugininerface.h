#ifndef PLUGININERFACE_H
#define PLUGININERFACE_H
#include <QObject>
#include <QWidget>
#include <QString>

class ipPluginInterface
{
public:
    virtual ~ipPluginInterface() {}
    virtual void setupUi(QWidget *parent) = 0;
};

#define PLUGININTERFACE_IID "com.ipdata.plugininterface"
Q_DECLARE_INTERFACE(ipPluginInterface, PLUGININTERFACE_IID)

#endif // PLUGININERFACE_H
