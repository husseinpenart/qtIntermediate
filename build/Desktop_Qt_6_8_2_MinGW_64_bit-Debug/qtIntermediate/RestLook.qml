import QtQuick
import QtQuick.Controls
import qtIntermediate
import QtQuick.Layouts
Item {
    ColumnLayout{
        anchors.fill: parent
        spacing: 0

        ListView{
            id : mListView
            model : myModel
            delegate: Rectangle{

                width : root.width
                height: textId.implicitHeight+30
                color: "beige"
                border.color: "yellowgreen"
                radius: 5

                Text {
                    width : parent.width
                    height: parent.height
                    id : textId
                    anchors.centerIn: parent
                    text : modelData
                    font.pointSize: 13
                    wrapMode: Text.WordWrap
                    verticalAlignment: Text.AlignVCenter
                    horizontalAlignment: Text.AlignHCenter
                }
            }
            Layout.fillHeight: true
            Layout.fillWidth: true
        }


        Button {
            id : button1Id
            text : "Fetch"
            Layout.fillWidth: true
            onClicked: {
                Wrapper.fetchPosts()
            }

        }
        Button {
            id : button2Id
            text : "RemoveLast"
            Layout.fillWidth: true
            onClicked: {
                Wrapper.removeLast()

            }

        }
    }

}
