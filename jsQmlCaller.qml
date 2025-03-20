import QtQuick
import QtQuick.Controls
Item {
    function qmlJSFunction(param){
        console.log(" QML Talking, C++ called me with parameter : "+ param + "returning back something")
        return "This is QML, over to you C++. Thanks for the Call."
    }

    Button {
        id : mButton
        text : "Call QML function from C++"
        onClicked: {
            QmlJsCaller.cppMethod("QML Calling... ")
        }
    }
}
