#ifndef CPPSIGNALSENDER_H
#define CPPSIGNALSENDER_H

#include <QObject>
#include <QTimer>
class cppSignalSender : public QObject
{
    Q_OBJECT
public:
    explicit cppSignalSender(QObject *parent = nullptr);

signals:
    void callQml(QString  parameter);
    void cppTimer(QString value);
public slots:
    void cppslot();
private:
    QTimer m_timer;
    int m_value;
};


#endif // CPPSIGNALSENDER_H
