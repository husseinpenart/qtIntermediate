#include "cppsignalsender.h"

cppSignalSender::cppSignalSender(QObject *parent)
    : QObject{parent},
    m_timer(new QTimer(this)),
    m_value(0)
{
    connect(&m_timer , &QTimer::timeout,[=](){
        ++m_value;
        emit cppTimer(QString::number(m_value));
    });
    m_timer.start(1000);
}

void cppSignalSender::cppslot()
{
    emit callQml("information from c++");
}
