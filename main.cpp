#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <cppworker.h>
#include <cppsignalsender.h>
#include <movie.h>
#include <propertywrapper.h>
#include <qmljscaller.h>
#include <cppclassvaraint.h>
#include <QQuickStyle>
#include <appwrapper.h>
#include <errorlevel.h>
int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QQuickStyle::setStyle("Material");
    qmlRegisterUncreatableType<ErrorLevel>("guide.learnqt.errorlevel" , 1,0,"ErrorLevel","Can not create ErrorLEvel type in Qml / now Allowed.");
    // create object in c++ workder
    AppWrapper appwrapper;
    cppWorker cppWorker;
    cppSignalSender sender;
    CppClassVaraint varaint;
    Movie movie;
    movie.setTitle("ResidentEvil");
    movie.setMainCharacter("Leon s kennedy");
    QString lastname = "Asadi";
    QString firstname = "Hussein";
    PropertyWrapper wrapper;
    wrapper.setLastname("Asadi");
    wrapper.setFirstname("Hussein");
    qmlJSCaller caller;
    QQmlApplicationEngine engine;
    //calling the header which we made
    engine.rootContext()->setContextProperty("BWorker" , &cppWorker);
    engine.rootContext()->setContextProperty("CppSignalSender" , &sender);
    engine.rootContext()->setContextProperty("Movie" , &movie);
    // engine.rootContext()->setContextProperty("lastname" , QVariant::fromValue(lastname));
    // engine.rootContext()->setContextProperty("firstname" , QVariant::fromValue(firstname));
    engine.rootContext()->setContextObject(&wrapper);
    engine.rootContext()->setContextProperty("QmlJsCaller",&caller);
    engine.rootContext()->setContextProperty("CppClassVaraint" , &varaint);

    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("qtIntermediate", "Main");
     // this will create list of root objects for js
    auto rootObjects  = engine.rootObjects();
    if (engine.rootObjects().isEmpty()){
        return -1;
    }else{
        caller.setQmlRoostObject(rootObjects[0]);
        varaint.setQmlRootObject(engine.rootObjects().first());
    }
    if(!appwrapper.initialize(&app)){
        return -1;
    }
    return app.exec();
}
