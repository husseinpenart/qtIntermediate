#ifndef QMLJSCALLER_H
#define QMLJSCALLER_H

#include <QObject>

class qmlJSCaller : public QObject
{
    Q_OBJECT
public:
    explicit qmlJSCaller(QObject *parent = nullptr);
    Q_INVOKABLE void cppMethod(QString paramters);
    void setQmlRoostObject(QObject * value);
signals:
private:
    void callJSMethod(QString params);
    QObject * qmlRootObject;
};

#endif // QMLJSCALLER_H
