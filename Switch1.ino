#include <SoftwareSerial.h>
#include <Servo.h>

SoftwareSerial mySerial(2,3);
Servo servo;
int pos;

void setup(){
  Serial.begin(9600);
  mySerial.begin(9600);
  servo.attach(4);
}

int a;

void loop(){
  if(mySerial.available()>0){
    String m = mySerial.readString();
    if(m.indexOf("1") == 0){
      servo.write(126);
      delay(100);
      servo.write(86);
      delay(100);
    }
    if(m.indexOf("0") == 0){
      servo.write(46);
      delay(100);
      servo.write(86);
      delay(100);
    }
  }
}
