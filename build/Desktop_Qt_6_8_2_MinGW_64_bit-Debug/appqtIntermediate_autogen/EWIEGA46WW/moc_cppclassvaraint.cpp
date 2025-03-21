/****************************************************************************
** Meta object code from reading C++ file 'cppclassvaraint.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../cppclassvaraint.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cppclassvaraint.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15CppClassVaraintE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN15CppClassVaraintE = QtMocHelpers::stringData(
    "CppClassVaraint",
    "triggerJSCall",
    "",
    "passFromQmlToCpp",
    "QVariantList",
    "list",
    "QVariantMap",
    "map",
    "getVariantListFromCpp",
    "getVariantMapFromCpp"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN15CppClassVaraintE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x0a,    1 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       3,    2,   39,    2, 0x02,    2 /* Public */,
       8,    0,   44,    2, 0x02,    5 /* Public */,
       9,    0,   45,    2, 0x02,    6 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6,    5,    7,
    0x80000000 | 4,
    0x80000000 | 6,

       0        // eod
};

Q_CONSTINIT const QMetaObject CppClassVaraint::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN15CppClassVaraintE.offsetsAndSizes,
    qt_meta_data_ZN15CppClassVaraintE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN15CppClassVaraintE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CppClassVaraint, std::true_type>,
        // method 'triggerJSCall'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'passFromQmlToCpp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariantList, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>,
        // method 'getVariantListFromCpp'
        QtPrivate::TypeAndForceComplete<QVariantList, std::false_type>,
        // method 'getVariantMapFromCpp'
        QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>
    >,
    nullptr
} };

void CppClassVaraint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CppClassVaraint *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->triggerJSCall(); break;
        case 1: _t->passFromQmlToCpp((*reinterpret_cast< std::add_pointer_t<QVariantList>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[2]))); break;
        case 2: { QVariantList _r = _t->getVariantListFromCpp();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 3: { QVariantMap _r = _t->getVariantMapFromCpp();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *CppClassVaraint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CppClassVaraint::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN15CppClassVaraintE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CppClassVaraint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
