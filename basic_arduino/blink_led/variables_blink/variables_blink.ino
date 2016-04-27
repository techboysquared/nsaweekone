/**********************************************
*
* This code will use variables to turn the LED off.
* This will make it much easier to change code later.
* It also makes the code more readable. 
*
**********************************************/


int ledPin = 13; // Make "ledPin" variable and set it to "13"
int delayTime = 1000; // Make "delayTime" variable
void setup()
{
  pinMode(ledPin, OUTPUT);
}

void loop()
{
    digitalWrite(ledPin, HIGH); // Turn ledPin (13) to HIGH
    delay(delayTime); // delay for delayTime (1000)
    digitalWrite(ledPin, LOW); // Turn ledPin (13) to LOW
    delay(delayTime); // delay for delayTime (1000)
}
