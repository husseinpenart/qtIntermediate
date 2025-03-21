#include "cppclassvaraint.h"
#include <QDebug>
#include <QColor>
#include <QDate>
CppClassVaraint::CppClassVaraint(QObject *parent)
    : QObject{parent}
{}
void CppClassVaraint::passFromQmlToCpp(QVariantList list/*array*/, QVariantMap map /*object*/)
{
    qDebug() << "Received variant list and map from QML";
    qDebug() << "List :";
    for( int i{0} ; i < list.size(); i++)
    {
        qDebug() << "List item :" << list.at(i).toString();
    }


    qDebug() << "Map :";
    for( int i{0} ; i < map.keys().size(); i++)
    {
        qDebug() << "Map item :" << map[map.keys().at(i)].toString();
    }
}

QVariantList CppClassVaraint::getVariantListFromCpp()
{
    QVariantList list;
    list << 123.3 << QColor(Qt::cyan) << "Qt is great" << 10;
    return list;
}

QVariantMap CppClassVaraint::getVariantMapFromCpp()
{
    QVariantMap map;
    map.insert("movie","Game of Thrones");
    map.insert("names", "John Snow");
    map.insert("role","Main Character");
    map.insert("release", QDate(2011, 4, 17));
    return map;
}

void CppClassVaraint::setQmlRootObject(QObject *value)
{
    qmlRootObject = value;
}

void CppClassVaraint::triggerJSCall()
{
    qDebug() << "Calling JS";
    QVariantList list;//array
    list << 123.3 << QColor(Qt::cyan) << "Qt is great" << 10;


    QVariantMap map;//object
    map.insert("movie","Game of Thrones");
    map.insert("names", "John Snow");
    map.insert("role","Main Character");
    map.insert("release", QDate(2011, 4, 17));



    QMetaObject::invokeMethod(qmlRootObject, "arrayObjectFunc",
                              Q_ARG(QVariant, QVariant::fromValue(list)),
                              Q_ARG(QVariant, QVariant::fromValue(map)));
    qDebug() << "Called JS";

}
