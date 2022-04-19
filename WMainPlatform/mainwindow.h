#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSettings>
#include <QCloseEvent>
#include <QMessageBox>
#include <QDir>
#include <QFileInfoList>
#include <QLibrary>
#include <QPluginLoader>
#include <QDebug>
#include <QFileDialog>
#include <QLabel>
#include <QGraphicsScene>
#include <QPushButton>
#include <QGraphicsProxyWidget>
#include <QTranslator>
#include <QThread>
#include <QThreadPool>
#include <QRunnable>
#include <QMutex>
#include <QWaitCondition>

#include "plugininterface.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    void wloadPluginIp();
    QPointer<QPluginLoader> currentPlugin;
    QPointer<QWidget> currentPluginGui;
};

#endif // MAINWINDOW_H
