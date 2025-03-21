#ifndef CPPCLASSVARAINT_H
#define CPPCLASSVARAINT_H

#include <QObject>
#include <QVariantList>
#include <QVariantMap>
#include <QVariantList>
#include <QtQml/qqmlregistration.h>
class CppClassVaraint : public QObject
{
    Q_OBJECT
public:
    explicit CppClassVaraint(QObject *parent = nullptr);

    Q_INVOKABLE void passFromQmlToCpp(QVariantList list, QVariantMap map);
    Q_INVOKABLE QVariantList getVariantListFromCpp();
    Q_INVOKABLE QVariantMap getVariantMapFromCpp();

    void setQmlRootObject(QObject *value);

signals:

public slots:
    void triggerJSCall();

private:
    QObject * qmlRootObject;
};
#endif // CPPCLASSVARAINT_H
