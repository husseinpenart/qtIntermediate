#ifndef CPPCLASSARRAY_H
#define CPPCLASSARRAY_H
#include <QObject>
#include <QVector>
#include <QtQml/qqmlregistration.h>

class CppClassArray : public QObject
{
    Q_OBJECT
    QML_ELEMENT
public:
    explicit CppClassArray(QObject *parent = nullptr);
    Q_INVOKABLE void qmlArrayToCpp(QVector<QString> vector);

    Q_INVOKABLE QVector<QString> retrieveStrings();

signals:
public slots:

private :
    QVector<QString> mVector;

};

#endif // CPPCLASSARRAY_H
