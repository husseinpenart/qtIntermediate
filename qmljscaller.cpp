#include "qmljscaller.h"
#include <QDebug>
#include <QVariant>
qmlJSCaller::qmlJSCaller(QObject *parent)
    : QObject{parent}
{}

void qmlJSCaller::cppMethod(QString paramters)
{
    qDebug() << "This is C++ talking, calling QML Javascript function";
    callJSMethod(paramters);
}

void qmlJSCaller::setQmlRoostObject(QObject *value)
{
    qmlRootObject = value;
}

void qmlJSCaller::callJSMethod(QString params)
{
    QVariant returnedValue;
    QVariant cppParameter  = QVariant::fromValue(params);
    // calling js function from c++
    QMetaObject::invokeMethod(qmlRootObject,"qmlJSFunction",
                              Q_RETURN_ARG(QVariant,returnedValue),
                              Q_ARG(QVariant,cppParameter));

    qDebug() << "C++ talking, done calling QML Javascript, the return value is :"
             << returnedValue.toString();
}
