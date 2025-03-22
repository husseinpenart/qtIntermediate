import QtQuick
import QtQuick.Controls
import qtIntermediate
import QtQuick.Layouts
import guide.learnqt.errorlevel
Window {
    id:root
    width: 640
    height: 480
    visible: true
    title: qsTr("Enums")
    Component.onCompleted: function(){
            console.log(ErrorLevel.MESSAGE);
        }
}
