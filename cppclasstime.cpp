#include "cppclasstime.h"

CppClassTime::CppClassTime(QObject *parent)
    : QObject{parent}
{}

void CppClassTime::cppSlot()
{
    qDebug() << "C++ here, cppSlot called";
    // emit sendDateTime(QDateTime::currentDateTime());
    emit sendTime(QTime::currentTime());
}

void CppClassTime::timeSlot(QTime time)
{
    qDebug() << "Time from QML is :" << time;

}

void CppClassTime::dateTimeSlot(QDateTime datetime)
{
    qDebug() << "DateTime from QML is :" << datetime ;

}
