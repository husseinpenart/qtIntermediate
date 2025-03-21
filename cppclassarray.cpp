#include "cppclassarray.h"
#include <QDebug>


CppClassArray::CppClassArray(QObject *parent) : QObject(parent)
{
    mVector.append("One");
    mVector.append("Two");
    mVector.append("Three");
    mVector.append("Four");
}

void CppClassArray::qmlArrayToCpp(QVector<QString> vector)
{
    foreach (QString string, vector) {
        qDebug() << string;
    }

}

QVector<QString> CppClassArray::retrieveStrings()
{
    return mVector;
}
