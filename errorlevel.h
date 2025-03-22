#ifndef ERRORLEVEL_H
#define ERRORLEVEL_H

#include <QObject>

class ErrorLevel : public QObject
{
    Q_OBJECT
public:
    explicit ErrorLevel(QObject *parent = nullptr);
   enum ErrorValue{
        INFORMATION,
        WARNING,
        DEBUG,
        MESSAGE
    };
    Q_ENUM(ErrorValue);
signals:
};

#endif // ERRORLEVEL_H
