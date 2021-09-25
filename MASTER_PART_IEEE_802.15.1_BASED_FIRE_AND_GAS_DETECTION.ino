#include <SoftwareSerial.h>
int mq = A0;
int Fire = 9;
int sensorThres = 500;
void setup() {
Serial.begin(38400);
}
void loop() {
int detectFire = digitalRead (Fire); //Fire Detection
int MQ2 = analogRead(mq); // Gas Detection
Serial.print("MQ2: ");
Serial.println(MQ2);
if( detectFire !=1 ){ // True if Fire is detected
Serial.write("F");
}
else if(MQ2 > sensorThres) { // True if Gas is detected
Serial.write("G");
}
delay(1000);
}
