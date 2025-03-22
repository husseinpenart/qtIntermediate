import QtQuick
import QtQuick.Controls
import qtIntermediate
import QtQuick.Layouts
Item {

    Counter{
        id: counterId
    }

    Column{
        anchors.centerIn: parent
        spacing: 10

        Rectangle{
            width: 200
            height: 200
            radius: 10
            color: (counterId.count >= 0) ? "green": "red"

            Text {
                id: mText
                text: counterId.count
                anchors.centerIn: parent
                font.pointSize: 40
                color: "white"
            }
        }

        Button{
            width: 200
            text : "Start"
            onClicked: {
                counterId.start()
            }
        }
        Button{
            width: 200
            text : "Stop"
            onClicked: {
                counterId.stop()
            }
        }

        Button{
            width: 200
            text : "Up"
            onClicked: {
                counterId.up = true;
            }
        }

        Button{
            width: 200
            text : "Down"
            onClicked: {
                counterId.up = false;
            }
        }

    }
}
