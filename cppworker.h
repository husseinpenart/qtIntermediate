#ifndef CPPWORKER_H
#define CPPWORKER_H

#include <QObject>

class cppWorker : public QObject
{
    Q_OBJECT
public:
    explicit cppWorker(QObject *parent = nullptr);
    // qt invokabel if we want our qt be callbale in our method with c++
    Q_INVOKABLE void regularMethod ();
    Q_INVOKABLE QString regularMethodWithReturn(QString name  , int age);
public slots:
    void cppSlot();
};

#endif // CPPWORKER_H
