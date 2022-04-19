/****************************************************************************
** Meta object code from reading C++ file 'ip_plugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ip_plugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ip_plugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Ip_Plugin_t {
    QByteArrayData data[17];
    char stringdata0[240];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Ip_Plugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Ip_Plugin_t qt_meta_stringdata_Ip_Plugin = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Ip_Plugin"
QT_MOC_LITERAL(1, 10, 12), // "updateNeeded"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 12), // "errorMessage"
QT_MOC_LITERAL(4, 37, 3), // "msg"
QT_MOC_LITERAL(5, 41, 11), // "infoMessage"
QT_MOC_LITERAL(6, 53, 13), // "wstartConnect"
QT_MOC_LITERAL(7, 67, 11), // "wendConnect"
QT_MOC_LITERAL(8, 79, 9), // "wsendData"
QT_MOC_LITERAL(9, 89, 3), // "str"
QT_MOC_LITERAL(10, 93, 28), // "on_pushButtonConnect_pressed"
QT_MOC_LITERAL(11, 122, 31), // "on_pushButtonDisconnect_pressed"
QT_MOC_LITERAL(12, 154, 21), // "on_pushButton_pressed"
QT_MOC_LITERAL(13, 176, 11), // "onConnected"
QT_MOC_LITERAL(14, 188, 14), // "onDisconnected"
QT_MOC_LITERAL(15, 203, 17), // "onSocketReadyRead"
QT_MOC_LITERAL(16, 221, 18) // "on_btnSend_pressed"

    },
    "Ip_Plugin\0updateNeeded\0\0errorMessage\0"
    "msg\0infoMessage\0wstartConnect\0wendConnect\0"
    "wsendData\0str\0on_pushButtonConnect_pressed\0"
    "on_pushButtonDisconnect_pressed\0"
    "on_pushButton_pressed\0onConnected\0"
    "onDisconnected\0onSocketReadyRead\0"
    "on_btnSend_pressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Ip_Plugin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    1,   80,    2, 0x06 /* Public */,
       5,    1,   83,    2, 0x06 /* Public */,
       6,    0,   86,    2, 0x06 /* Public */,
       7,    0,   87,    2, 0x06 /* Public */,
       8,    1,   88,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   91,    2, 0x08 /* Private */,
      11,    0,   92,    2, 0x08 /* Private */,
      12,    0,   93,    2, 0x08 /* Private */,
      13,    0,   94,    2, 0x08 /* Private */,
      14,    0,   95,    2, 0x08 /* Private */,
      15,    0,   96,    2, 0x08 /* Private */,
      16,    0,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Ip_Plugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Ip_Plugin *_t = static_cast<Ip_Plugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateNeeded(); break;
        case 1: _t->errorMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->infoMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->wstartConnect(); break;
        case 4: _t->wendConnect(); break;
        case 5: _t->wsendData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->on_pushButtonConnect_pressed(); break;
        case 7: _t->on_pushButtonDisconnect_pressed(); break;
        case 8: _t->on_pushButton_pressed(); break;
        case 9: _t->onConnected(); break;
        case 10: _t->onDisconnected(); break;
        case 11: _t->onSocketReadyRead(); break;
        case 12: _t->on_btnSend_pressed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Ip_Plugin::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Ip_Plugin::updateNeeded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Ip_Plugin::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Ip_Plugin::errorMessage)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Ip_Plugin::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Ip_Plugin::infoMessage)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Ip_Plugin::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Ip_Plugin::wstartConnect)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Ip_Plugin::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Ip_Plugin::wendConnect)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Ip_Plugin::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Ip_Plugin::wsendData)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject Ip_Plugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Ip_Plugin.data,
      qt_meta_data_Ip_Plugin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Ip_Plugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Ip_Plugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Ip_Plugin.stringdata0))
        return static_cast<void*>(const_cast< Ip_Plugin*>(this));
    if (!strcmp(_clname, "ipPluginInterface"))
        return static_cast< ipPluginInterface*>(const_cast< Ip_Plugin*>(this));
    if (!strcmp(_clname, "com.ipdata.plugininterface"))
        return static_cast< ipPluginInterface*>(const_cast< Ip_Plugin*>(this));
    return QObject::qt_metacast(_clname);
}

int Ip_Plugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Ip_Plugin::updateNeeded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Ip_Plugin::errorMessage(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Ip_Plugin::infoMessage(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Ip_Plugin::wstartConnect()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Ip_Plugin::wendConnect()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Ip_Plugin::wsendData(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0x9c, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x88, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    0x1a, 0x00, 'c',  'o',  'm',  '.',  'i',  'p', 
    'd',  'a',  't',  'a',  '.',  'p',  'l',  'u', 
    'g',  'i',  'n',  'i',  'n',  't',  'e',  'r', 
    'f',  'a',  'c',  'e',  0x9b, 0x08, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x09, 0x00, 'I',  'p', 
    '_',  'P',  'l',  'u',  'g',  'i',  'n',  0x00,
    ':',  ' ',  0xa1, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x95, 0x0f, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 'l',  0x00, 0x00, 0x00,
    '4',  0x00, 0x00, 0x00, '`',  0x00, 0x00, 0x00,
    'P',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0x9c, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x88, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    0x1a, 0x00, 'c',  'o',  'm',  '.',  'i',  'p', 
    'd',  'a',  't',  'a',  '.',  'p',  'l',  'u', 
    'g',  'i',  'n',  'i',  'n',  't',  'e',  'r', 
    'f',  'a',  'c',  'e',  0x95, 0x08, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x1b, 0x0c, 0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x09, 0x00, 'I',  'p',  '_',  'P',  'l',  'u', 
    'g',  'i',  'n',  0x00, '1',  0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    ':',  ' ',  0xa1, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, '4',  0x00, 0x00, 0x00,
    'P',  0x00, 0x00, 0x00, 'l',  0x00, 0x00, 0x00,
    'x',  0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(Ip_Plugin, Ip_Plugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
