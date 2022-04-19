#include "mainwindow.h"
#include "ui_mainwindow.h"


#define PLUGINS_SUBFOLDER                   "/plugins/"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    wloadPluginIp();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::wloadPluginIp()
{
    QDir pluginsDir(qApp->applicationDirPath() + PLUGINS_SUBFOLDER);
    QFileInfoList pluginFiles = pluginsDir.entryInfoList(QDir::NoDotAndDotDot | QDir::Files, QDir::Name);
    foreach(QFileInfo pluginFile, pluginFiles)
    {
        if(QLibrary::isLibrary(pluginFile.absoluteFilePath()))
        {
            //QPluginLoader pluginLoader(pluginFile.absoluteFilePath(), this);
            currentPlugin = new QPluginLoader(pluginFile.absoluteFilePath(), this);
            currentPluginGui = new QWidget(this);
            ui->verticalPluginLayout->addWidget(currentPluginGui);
            ipPluginInterface *currentPluginInstance = dynamic_cast<ipPluginInterface*>(currentPlugin->instance());

            if(currentPluginInstance)
            {
                currentPluginInstance->setupUi(currentPluginGui);
                //connect(currentPlugin->instance(), SIGNAL(updateNeeded()), this, SLOT(onCurrentPluginUpdateNeeded()));
                //connect(currentPlugin->instance(), SIGNAL(infoMessage(QString)), this, SLOT(onCurrentPluginInfoMessage(QString)));
                //connect(currentPlugin->instance(), SIGNAL(errorMessage(QString)), this, SLOT(onCurrentPluginErrorMessage(QString)));

            }
        }
    }

}
