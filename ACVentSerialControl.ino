// zoomkat 12-25-13 serial servo test
// type servo position 0 to 180 in serial monitor
// or for writeMicroseconds, use a value like 1500
// Send an a to attach servo or d to detach servo
// for IDE 1.0.5 and later
// Powering a servo from the arduino usually *DOES NOT WORK*.

#include <Servo.h> 
String readString; //String captured from serial port
Servo myservo;  // create servo object to control a servo 
int n; //value to write to servo

void setup() {
  Serial.begin(115200);
  myservo.writeMicroseconds(0); //set initial servo position if desired
  myservo.attach(D7);  //the pin for the servo control, and range if desired
  Serial.println();
}

void loop() {



}
