#include "template_plugin.h"

#include "ui_plugin.h"

Template_Plugin::Template_Plugin()
{
    // Insert initialization codes here ...
}

Template_Plugin::~Template_Plugin()
{
    // Insert cleanup codes here ...
}



void Template_Plugin::setupUi(QWidget *parent)
{
    ui = new Ui::PluginGui;
    ui->setupUi(parent);

    // Connect signals for GUI elemnts manually here since they won't be connected by name in a plugin
    // ...
    // emit updateNeeded(); should be added whenever parameters on the plugin GUI change
}
