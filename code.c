/*
 * Created by Liya G.
 * Created on April 8, 2025
 
 * Make a servo spin in sync with a potentiometer.
 */

 # include <Servo.h>

 Servo servoNumber1;
 const int ANALOG_PIN = 0; // set potentiometer pin to A0
 float angleOfServo; 
   
  void setup() 
 {
    servoNumber1.attach(9); // set servo pin to PIN 9
  }
  
  void loop() 
 {
    angleOfServo = analogRead(ANALOG_PIN);
    angleOfServo = angleOfServo / 6; // converts potentiometer range from 0-1023 to 1-180 degrees to sync with servo
    servoNumber1.write(angleOfServo); // tells the servo to go to the same angle as the potentiometer
 
  }
