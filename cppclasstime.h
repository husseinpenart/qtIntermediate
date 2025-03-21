#ifndef CPPCLASSTIME_H
#define CPPCLASSTIME_H

#include <QObject>
#include <QDateTime>
#include <QTime>
#include <QtQml/qqmlregistration.h>
class CppClassTime : public QObject
{
    Q_OBJECT
    QML_ELEMENT
public:
    explicit CppClassTime(QObject *parent = nullptr);

signals:
    void sendDateTime(QDateTime datetimeparam);
    void sendTime( QTime timeparam);
public slots:
    void cppSlot();
    void timeSlot(QTime time);
    void dateTimeSlot(QDateTime datetime);
};



#endif // CPPCLASSTIME_H
