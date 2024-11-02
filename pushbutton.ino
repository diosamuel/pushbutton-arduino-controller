#include <Servo.h>

int buttonPin = 4; 
int buttonPin2 = 5;
int buttonPin3 = 6;
int buttonPin4 = 8;
int buttonPin5 = 9;
int buttonState = HIGH;
int buttonState2 = HIGH;
int buttonState3 = HIGH;
int buttonState4 = HIGH;
int buttonState5 = HIGH;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(buttonPin3, INPUT_PULLUP);
  pinMode(buttonPin4, INPUT_PULLUP);
  pinMode(buttonPin5, INPUT_PULLUP);
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  delay(2000);
}

void loop() {
  digitalWrite(LED_BUILTIN, LOW);
  buttonState = digitalRead(buttonPin);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);
  buttonState4 = digitalRead(buttonPin4);
  buttonState5 = digitalRead(buttonPin5);
  if (buttonState == LOW) {
    Serial.println("up");
    digitalWrite(LED_BUILTIN, HIGH);
    delay(200);
  }
  else if (buttonState2 == LOW) {
    Serial.println("right");
    digitalWrite(LED_BUILTIN, HIGH);
    delay(200);

  }
  else if (buttonState3 == LOW) {
    Serial.println("down");
    digitalWrite(LED_BUILTIN, HIGH);
    delay(200);
  }
  else if (buttonState4 == LOW) {
    Serial.println("left");
    digitalWrite(LED_BUILTIN, HIGH);
    delay(200);
  } else if (buttonState5 == LOW) {
    Serial.println("click");
    digitalWrite(LED_BUILTIN, HIGH);
    delay(200);
  }
}