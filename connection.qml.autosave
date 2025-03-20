import QtQuick
import QtQuick.Controls

Item {
    Row{
        Rectangle{
            id:redRectId
            color:'red'
            width: 100
            height: 100
            MouseArea{
                id:redRectMouseArea
                anchors.fill: parent
            }
        }
        Rectangle{
            id:greenRectId
            color:'green'
            width: 100
            height: 100
            Connections{
                target:redRectMouseArea
                function onClicked(){
                    console.log("clicked on  green rectangle")
                }
            }

        }
        Rectangle{
            id:blueRectId
            color:'blue'
            width: 100
            height: 100
            Connections{
                target:redRectMouseArea
                function onClicked(){
                    console.log("clicked on  blue rectangle")
                }
            }
        }

    }
}
