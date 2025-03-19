#include "cppworker.h"
#include <QtDebug>
cppWorker::cppWorker(QObject *parent)
    : QObject{parent}
{}

void cppWorker::regularMethod()
{
    qDebug() << "this is c++ message calling from regular void";
}

QString cppWorker::regularMethodWithReturn(QString name, int age)
{
    qDebug() << "this is c++ return method gets the "<< name << "and "<< age <<"from regular method return";
    return QString (name + " " + QString::number(age) + "years old ");
}
void cppWorker::cppSlot(){
    qDebug() << "this is c++ talking  , cppslot called";
}
