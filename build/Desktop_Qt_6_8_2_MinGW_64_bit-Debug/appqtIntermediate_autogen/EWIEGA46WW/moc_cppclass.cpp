/****************************************************************************
** Meta object code from reading C++ file 'cppclass.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cppclass.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cppclass.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN8CppClassE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN8CppClassE = QtMocHelpers::stringData(
    "CppClass",
    "QML.Element",
    "auto",
    "sendInt",
    "",
    "params",
    "sendDouble",
    "param",
    "sendBoolRealFloat",
    "boolparam",
    "realparam",
    "floatparam",
    "sendStringUrl",
    "stringparam",
    "urlparam",
    "sendColorFont",
    "colorparam",
    "fontparam",
    "sendDate",
    "dateparam",
    "sendPoint",
    "pointparam",
    "pointfparam",
    "sendSize",
    "sizeparam",
    "sizefparam",
    "sendRect",
    "rectparam",
    "rectfparam",
    "cppSlot",
    "receivePoint",
    "point",
    "receivedRect",
    "rect"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN8CppClassE[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
      12,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   88,    4, 0x06,    1 /* Public */,
       6,    1,   91,    4, 0x06,    3 /* Public */,
       8,    3,   94,    4, 0x06,    5 /* Public */,
      12,    2,  101,    4, 0x06,    9 /* Public */,
      15,    2,  106,    4, 0x06,   12 /* Public */,
      18,    1,  111,    4, 0x06,   15 /* Public */,
      20,    2,  114,    4, 0x06,   17 /* Public */,
      23,    2,  119,    4, 0x06,   20 /* Public */,
      26,    2,  124,    4, 0x06,   23 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      29,    0,  129,    4, 0x0a,   26 /* Public */,
      30,    1,  130,    4, 0x0a,   27 /* Public */,
      32,    1,  133,    4, 0x0a,   29 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Bool, QMetaType::QReal, QMetaType::Float,    9,   10,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QUrl,   13,   14,
    QMetaType::Void, QMetaType::QColor, QMetaType::QFont,   16,   17,
    QMetaType::Void, QMetaType::QDate,   19,
    QMetaType::Void, QMetaType::QPoint, QMetaType::QPointF,   21,   22,
    QMetaType::Void, QMetaType::QSize, QMetaType::QSizeF,   24,   25,
    QMetaType::Void, QMetaType::QRect, QMetaType::QRectF,   27,   28,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   31,
    QMetaType::Void, QMetaType::QRect,   33,

       0        // eod
};

Q_CONSTINIT const QMetaObject CppClass::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN8CppClassE.offsetsAndSizes,
    qt_meta_data_ZN8CppClassE,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // Q_OBJECT / Q_GADGET
        CppClass,
        // method 'sendInt'
        void,
        int,
        // method 'sendDouble'
        void,
        double,
        // method 'sendBoolRealFloat'
        void,
        bool,
        qreal,
        float,
        // method 'sendStringUrl'
        void,
        QString,
        QUrl,
        // method 'sendColorFont'
        void,
        QColor,
        QFont,
        // method 'sendDate'
        void,
        QDate,
        // method 'sendPoint'
        void,
        QPoint,
        QPointF,
        // method 'sendSize'
        void,
        QSize,
        QSizeF,
        // method 'sendRect'
        void,
        QRect,
        QRectF,
        // method 'cppSlot'
        void,
        // method 'receivePoint'
        void,
        QPoint,
        // method 'receivedRect'
        void,
        QRect
    >,
    nullptr
} };

void CppClass::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CppClass *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->sendInt((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->sendDouble((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 2: _t->sendBoolRealFloat((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qreal>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[3]))); break;
        case 3: _t->sendStringUrl((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[2]))); break;
        case 4: _t->sendColorFont((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QFont>>(_a[2]))); break;
        case 5: _t->sendDate((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 6: _t->sendPoint((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[2]))); break;
        case 7: _t->sendSize((*reinterpret_cast< std::add_pointer_t<QSize>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QSizeF>>(_a[2]))); break;
        case 8: _t->sendRect((*reinterpret_cast< std::add_pointer_t<QRect>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QRectF>>(_a[2]))); break;
        case 9: _t->cppSlot(); break;
        case 10: _t->receivePoint((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 11: _t->receivedRect((*reinterpret_cast< std::add_pointer_t<QRect>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (CppClass::*)(int );
            if (_q_method_type _q_method = &CppClass::sendInt; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (CppClass::*)(double );
            if (_q_method_type _q_method = &CppClass::sendDouble; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (CppClass::*)(bool , qreal , float );
            if (_q_method_type _q_method = &CppClass::sendBoolRealFloat; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (CppClass::*)(QString , QUrl );
            if (_q_method_type _q_method = &CppClass::sendStringUrl; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (CppClass::*)(QColor , QFont );
            if (_q_method_type _q_method = &CppClass::sendColorFont; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (CppClass::*)(QDate );
            if (_q_method_type _q_method = &CppClass::sendDate; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (CppClass::*)(QPoint , QPointF );
            if (_q_method_type _q_method = &CppClass::sendPoint; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (CppClass::*)(QSize , QSizeF );
            if (_q_method_type _q_method = &CppClass::sendSize; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (CppClass::*)(QRect , QRectF );
            if (_q_method_type _q_method = &CppClass::sendRect; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject *CppClass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CppClass::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN8CppClassE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CppClass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void CppClass::sendInt(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CppClass::sendDouble(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CppClass::sendBoolRealFloat(bool _t1, qreal _t2, float _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CppClass::sendStringUrl(QString _t1, QUrl _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CppClass::sendColorFont(QColor _t1, QFont _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CppClass::sendDate(QDate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CppClass::sendPoint(QPoint _t1, QPointF _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void CppClass::sendSize(QSize _t1, QSizeF _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void CppClass::sendRect(QRect _t1, QRectF _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
