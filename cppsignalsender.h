#ifndef CPPSIGNALSENDER_H
#define CPPSIGNALSENDER_H

#include <QObject>

class cppSignalSender : public QObject
{
    Q_OBJECT
public:
    explicit cppSignalSender(QObject *parent = nullptr);

signals:
};

#endif // CPPSIGNALSENDER_H
