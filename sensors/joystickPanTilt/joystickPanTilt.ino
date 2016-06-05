#include <Servo.h>
int sensorPin = 5;
int value = 0;

Servo leftRightServo;
int leftRightPos = 0;

Servo upDownServo;
int upDownPos = 0;


void setup() {
  pinMode(3, OUTPUT);
  Serial.begin(9600);
  leftRightServo.attach(11);
  leftRightServo.write(leftRightPos);
  
  upDownServo.attach(10);
  upDownServo.write(upDownPos);
}

void loop() {
  value = analogRead(0);
  if(value < 450 && leftRightPos < 180)
  {
    leftRightPos++;
    leftRightServo.write(leftRightPos);
  }
  else if(value > 550 && leftRightPos > 0)
  {
    leftRightPos--;
    leftRightServo.write(leftRightPos);
  }  
  
  value = analogRead(1);
  if(value < 450 && upDownPos < 180)
  {
    upDownPos += 10;
    upDownServo.write(upDownPos);
    Serial.println("Should turn");
  }
  else if(value > 550 && upDownPos > 0)
  {
    upDownPos -= 10;
    upDownServo.write(upDownPos);
     Serial.println("Should turn");
  }
  delay(10);
}
