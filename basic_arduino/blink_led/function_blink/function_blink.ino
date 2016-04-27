/******************************************************************************
*
*  This code takes the code to blink the led and puts it in a function. 
*  You can now blink the led by calling the blink_led function.
*  Example:
*    blink_led();
*
******************************************************************************/

int ledPin = 13; // create a variable of type integer with name "ledPin" and set it to "13"
int delayTime = 1000; // create a variable of type integer with name "delayTime" and set it to "1000"

// function definition for blinking the LED
// creates a function called blink_led and tells us what to do in order to blink the led. 
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
  blink_led(); // function call to blink_led which means code inside of { and } of void blink_led() will be ran. 
}
