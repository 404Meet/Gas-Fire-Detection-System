byte BState = 0;
const int buzzer=8;
void setup(){
Serial.begin(38400);
pinMode(buzzer,OUTPUT);
}
void loop(){



if(Serial.available()>0){ //Receiving output from master
BState = Serial.read();
}
if(BState == 'F'){
tone(buzzer,2000 ,1000);
Serial.print(BRState);
}
if(BState == 'G'){
tone(buzzer,2000 ,1000);
}
}
