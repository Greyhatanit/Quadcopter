#include <Servo.h>

Servo servo1, servo2, servo3, servo4;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  servo1.attach(9);  // attaches the servo on pin 9 to the servo object
  servo2.attach(8);  // attaches the servo on pin 8 to the servo object (correct)
  servo3.attach(7);   // attaches the servo on pin 7 to the servo object
  servo4.attach(6);   // attaches the servo on pin 6 to the servo object
}

void loop() {
    for (pos = 0; pos <= 2000; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo1.write(pos);              // tell servo1 to go to position in variable 'pos'
    servo2.write(pos);              // tell servo2 to go to position in variable 'pos'
    servo3.write(pos);              // tell servo3 to go to position in variable 'pos'
    servo4.write(pos);              // tell servo4 to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position   
    }
}


