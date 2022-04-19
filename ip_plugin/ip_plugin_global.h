#ifndef IP_PLUGIN_GLOBAL_H
#define IP_PLUGIN_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(IP_PLUGIN_LIBRARY)
#  define IP_PLUGINSHARED_EXPORT Q_DECL_EXPORT
#else
#  define IP_PLUGINSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // IP_PLUGIN_GLOBAL_H
