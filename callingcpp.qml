 import QtQuick
import QtQuick.Controls

Item {
    Column{
          spacing: 10
          anchors.right: parent.right
          Row{
              Text{
                  text: "regularMethod"
              }
              Button{
                  text: "Call C++ method"
                  onClicked: function(){
                      BWorker.regularMethod()
                  }

              }
          }
          Row {
              spacing: 10
              anchors.right: parent.right
              Text {
                  text: qsTr("cppSlot()")
              }

              Button {
                  text: "Call C++ slot"
                  onClicked: {
                      BWorker.cppSlot();
                  }
              }
          }
          Row {
              spacing: 10
              anchors.right: parent.right
              Text {
                  id: returnTextId
                  text: qsTr("return")
              }

              Text {
                  text: "regularMethodWithReturn("
              }
              TextField {
                  id: nameFieldId
                  placeholderText: qsTr("name")
                  text: qsTr("Hussein")
              }
              Text {
                  text: qsTr(",")
              }
              TextField {
                  id: ageFieldId
                  placeholderText: qsTr("age")
                  inputMethodHints: Qt.ImhDigitsOnly
                  text: qsTr("29")
              }
              Text {
                  text: qsTr(")")
              }
              Button {
                  text: qsTr("Call C++ method")
                  onClicked: {
                      if (nameFieldId.text !== null && ageFieldId.text !== null) {
                          var response = BWorker.regularMethodWithReturn(nameFieldId.text, parseInt(ageFieldId.text));
                          returnTextId.text = response;
                      } else {
                          console.log("One of the two required fields is empty");
                      }
                  }
              }
          }
      }
    OtherQmlCallAction{

    }
}
