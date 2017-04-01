#include <Servo.h>

Servo myservo;

// Constant variable
int pos = 120;
const int buttonPin = 3;

// Changing variable
int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
  
  pinMode(buttonPin, INPUT);
  myservo.write(pos);
  myservo.attach(9);
  Serial.begin(57600);
  Bean.setLed(255,0,0);

}

void loop() {  // Read the state of the button
  buttonState = digitalRead(buttonPin);
  
  if (buttonState == HIGH){
    myservo.write(180);
  }else{
    myservo.write(pos);
  }
}
