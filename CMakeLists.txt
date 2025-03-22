cmake_minimum_required(VERSION 3.16)

project(qtIntermediate VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Quick QuickControls2)

qt_standard_project_setup(REQUIRES 6.5)

qt_add_executable(appqtIntermediate
    main.cpp
)

qt_add_qml_module(appqtIntermediate
    URI qtIntermediate
    VERSION 1.0
    QML_FILES
        Main.qml
        SOURCES cppworker.h cppworker.cpp
        QML_FILES OtherQmlCallAction.qml
        QML_FILES callingcpp.qml
        QML_FILES connection.qml
        SOURCES cppsignalsender.h cppsignalsender.cpp
        QML_FILES signalSender.qml
        SOURCES movie.h movie.cpp
        QML_FILES cppmapping.qml
        SOURCES propertywrapper.h propertywrapper.cpp
        QML_FILES contextObject.qml
        SOURCES qmljscaller.h qmljscaller.cpp
        QML_FILES jsQmlCaller.qml
        SOURCES cppclass.h cppclass.cpp
        QML_FILES DataTypes.qml
        SOURCES
        SOURCES cppclasstime.h cppclasstime.cpp
        QML_FILES QtTime.qml
        SOURCES cppclassarray.h cppclassarray.cpp
        QML_FILES QTArrayTojs.qml
        SOURCES
        SOURCES cppclassvaraint.h cppclassvaraint.cpp
        SOURCES appwrapper.h appwrapper.cpp
        SOURCES counter.h counter.cpp
        QML_FILES RestLook.qml
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appqtIntermediate PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appqtIntermediate
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appqtIntermediate
    PRIVATE Qt6::Quick Qt6::QuickControls2
)

include(GNUInstallDirs)
install(TARGETS appqtIntermediate
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
