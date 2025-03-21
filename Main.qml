import QtQuick
import QtQuick.Controls
import qtIntermediate

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("DateTime in qml")
    property string mValue: "Clicked %1 times, double is %2"
    property int clickCount: 0
    CppClassTime{
        id:cppclassid
        onSendDateTime:  (datetimeparam) =>
                         {
                             console.log("Received datetime :"+ datetimeparam);
                             //Extract info
                             console.log("Year :" + datetimeparam.getFullYear())
                             console.log("...",datetimeparam.toGMTString())
                         }

        onSendTime: (timeparam)=>{
                        console.log("Received time :"+ timeparam);

                    }
    }
    Button{
        id: buttonId
        text: "Click me"

        onClicked: function(){
            //Receive data from C++
            // cppclassid.cppSlot()

            // Send data to C++
            var date = new Date()
            cppclassid.timeSlot(date);
            cppclassid.dateTimeSlot(date)

            //String fromatting
            clickCount++
            buttonId.text = mValue.arg(clickCount).arg(clickCount*2)
        }
    }

}

