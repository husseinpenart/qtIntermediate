#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <cppworker.h>
int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    // create object in c++ workder
    cppWorker cppWorker;
    QQmlApplicationEngine engine;
    //calling the header which we made
    engine.rootContext()->setContextProperty("BWorker" , &cppWorker);

    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("qtIntermediate", "Main");

    return app.exec();
}
