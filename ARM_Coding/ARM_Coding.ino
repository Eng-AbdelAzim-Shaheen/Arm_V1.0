#include <Servo.h>  
   
Servo SERVO_1 ;  
Servo SERVO_2 ;   
Servo SERVO_3 ;   
Servo SERVO_4 ;   
Servo SERVO_5 ;  
 
int EMG=0 , Angle=15;  

void setup() {  
SERVO_1.attach(11);  
SERVO_2.attach(10);  
SERVO_3.attach(9);  
SERVO_4.attach(6);  
SERVO_5.attach(5);  

pinMode(8,OUTPUT);
pinMode(7,OUTPUT);
Serial.begin(9600);
}  
void loop() {  
  digitalWrite(8,HIGH);
  digitalWrite(7,LOW);
EMG=analogRead(A0);  
if (EMG>350) 
{ 
  Angle=140; 
} 
else
{
  Angle=15;
}

  SERVO_1.write(Angle);  
  SERVO_2.write(Angle);   
  SERVO_3.write(Angle);  
  SERVO_4.write(Angle);  
  SERVO_5.write(Angle); 
Serial.println(EMG);
}