int ledPin = 13;
int delayTime = 1000;

void blink_led_on_pin(int pinToBlink)
{
  digitalWrite(pinToBlink, HIGH);
  delay(delayTime);
  digitalWrite(pinToBlink, LOW);
  delay(delayTime);
}

void setup()
{
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  blink_led_on_pin(ledPin);
}
