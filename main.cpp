#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <cppworker.h>
#include <cppsignalsender.h>
#include <movie.h>
#include <propertywrapper.h>
int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    // create object in c++ workder
    cppWorker cppWorker;
    cppSignalSender sender;

    Movie movie;
    movie.setTitle("ResidentEvil");
    movie.setMainCharacter("Leon s kennedy");
    QString lastname = "Asadi";
    QString firstname = "Hussein";
    PropertyWrapper wrapper;
    wrapper.setLastname("Asadi");
    wrapper.setFirstname("Hussein");

    QQmlApplicationEngine engine;
    //calling the header which we made
    engine.rootContext()->setContextProperty("BWorker" , &cppWorker);
    engine.rootContext()->setContextProperty("CppSignalSender" , &sender);
    engine.rootContext()->setContextProperty("Movie" , &movie);
    // engine.rootContext()->setContextProperty("lastname" , QVariant::fromValue(lastname));
    // engine.rootContext()->setContextProperty("firstname" , QVariant::fromValue(firstname));
    engine.rootContext()->setContextObject(&wrapper);
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("qtIntermediate", "Main");

    return app.exec();
}
