#ifndef CVPLUGIN_H
#define CVPLUGIN_H

#include <QObject>
#include <QWidget>
#include <QString>

//#include "opencv2/opencv.hpp"

class CvPluginInterface
{
public:
    virtual ~CvPluginInterface() {}

    virtual void setupUi(QWidget *parent) = 0;

};

#define CVPLUGININTERFACE_IID "com.computervision.cvplugininterface"
Q_DECLARE_INTERFACE(CvPluginInterface, CVPLUGININTERFACE_IID)

#endif // CVPLUGIN_H
