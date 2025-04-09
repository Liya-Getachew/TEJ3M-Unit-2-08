/*
 * Created by Liya G.
 * Created on April 8, 2025
 
 * Make a servo spin in sync with a potentiometer.
 */

 # include <Servo.h>

 Servo servoNumber1;
 const int ANALOG_PIN = 0;
 float angleOfServo; 
   
  void setup() 
 {
    servoNumber1.attach(9);
  }
  
  void loop() 
 {
    angleOfServo = analogRead(ANALOG_PIN);
    angleOfServo = angleOfServo / 6; // changes potentiometer range from 0-1023 to 1-180
    servoNumber1.write(angleOfServo);
 
  }