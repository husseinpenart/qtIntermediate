/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#if __has_include(<cppclass.h>)
#  include <cppclass.h>
#endif
#if __has_include(<cppclasstime.h>)
#  include <cppclasstime.h>
#endif


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_qtIntermediate()
{
    QT_WARNING_PUSH QT_WARNING_DISABLE_DEPRECATED
    qmlRegisterTypesAndRevisions<CppClass>("qtIntermediate", 1);
    qmlRegisterTypesAndRevisions<CppClassTime>("qtIntermediate", 1);
    QT_WARNING_POP
    qmlRegisterModule("qtIntermediate", 1, 0);
}

static const QQmlModuleRegistration qtIntermediateRegistration("qtIntermediate", qml_register_types_qtIntermediate);
