#include <Servo.h>

// constants won't change. They're used here to set pin numbers:
const int MOTOR_LED = 7;    
const int TENSION_LED = 4; 
const int BUTTON =  2;      
const int MOTOR = 9;
const int MAX_ANGLE = 100;
Servo servo; 

// variables will change:
int btnState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the MOTOR_LED pin as an output:
  pinMode(MOTOR_LED, OUTPUT);
  pinMode(TENSION_LED, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(BUTTON, INPUT);
  servo.attach(MOTOR);
}

void loop() {
  // read the state of the pushbutton value:
  btnState = digitalRead(BUTTON);
  digitalWrite(TENSION_LED, HIGH);
  // check if the pushbutton is pressed. If it is, the btnState is HIGH:
  if (btnState == HIGH) {
    // turn MOTOR_LED on:
    digitalWrite(MOTOR_LED, HIGH);
    doBehaviour(random(1,4));
  } else {
    // turn MOTOR_LED off:
    digitalWrite(MOTOR_LED, LOW);
    servo.write(0);
  }
}


void doBehaviour(int nb){
  switch(nb) {
    case 0:
      behaviour0();
      break;
    case 1:
      behaviour1();
      break;
    case 2:
      behaviour2();
      break;
    default:
      behaviour0();
      break;
  }
}

void behaviour0(void) {
  while(btnState != LOW){
    btnState = digitalRead(BUTTON);
    servo.write(MAX_ANGLE);
  }
}

void behaviour1(void){
  servo.write(45);
  delay(500);
  servo.write(0);
  delay(1000);
  while(btnState != LOW){
    btnState = digitalRead(BUTTON);
    servo.write(MAX_ANGLE);
  }
}

void behaviour2(void){
  servo.write(35);
  delay(1000);
  while(btnState != LOW){
    btnState = digitalRead(BUTTON);
    servo.write(MAX_ANGLE);
  }
}
