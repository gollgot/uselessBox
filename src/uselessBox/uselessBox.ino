#include <Servo.h>


const int BUTTON = 2; 
const int LED =  13; 
const int SERVO = 9;

int btnState = 0;
Servo servo;

void setup() {
  // initialize the LED pin as an output:
  pinMode(LED, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(BUTTON, INPUT);
  // Initialize the servo motor
  servo.attach(SERVO);
}

void loop() {
  // read the state of the pushbutton value:
  btnState = digitalRead(BUTTON);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (btnState == HIGH) {
    // turn LED on and move the servo from 0 to 180 degree
    digitalWrite(LED, HIGH);
    servo.write(90);
    
  }else {
    // turn LED off and servo to 0 degree
    digitalWrite(LED, LOW);
    servo.write(0);
  }
}
