#ifndef TEMPLATE_PLUGIN_H
#define TEMPLATE_PLUGIN_H

#include "template_plugin_global.h"
#include "plugininterface.h"

namespace Ui {
    class PluginGui;
}

class TEMPLATE_PLUGINSHARED_EXPORT Template_Plugin: public QObject, public ipPluginInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "com.ipdata.plugininterface")
    Q_INTERFACES(ipPluginInterface)
public:
    Template_Plugin();
    ~Template_Plugin();

    void setupUi(QWidget *parent);

signals:
    void updateNeeded();
    void errorMessage(QString msg);
    void infoMessage(QString msg);

private:
    Ui::PluginGui *ui;

};

#endif // TEMPLATE_PLUGIN_H
