int ledPin = 13;
int delayTime = 1000;

void blink_led()
{
  digitalWrite(ledPin, HIGH);
  delay(delayTime);
  digitalWrite(ledPin, LOW);
  delay(delayTime);
}

void setup()
{
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  blink_led();
}
