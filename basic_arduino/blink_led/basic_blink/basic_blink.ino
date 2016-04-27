/****************************************************
*
*  This code is made to blink an LED on an off every two seconds. 
*
*****************************************************/


/*****************************************************
*  This is a comment. Comments are not actually seen
*  by the Arduino.
*  More specifically this is a block comment.
*  / * Begins a block comment (remove spaces)
*  * / Ends a block comment (remove spaces)
******************************************************/

// This is a line comment Everything after // is considered a comment. 


// Setup is ran at the beginning of the program. 
// Code between { and } is used to run the program.  
// Keywords: function, function definition, setup function
void setup() 
{
  pinMode(13, OUTPUT); // Tells Arduino "Pin 13" it output.
}

// Loop is ran over and over again after setup is ran.
void loop()
{
  digitalWrite(13, HIGH); // Set "Pin 13" to HIGH ie turn on the LED
  delay(1000); // Wait for 1000 miliseconds -> 1 second
  digitalWrite(13, LOW); // Set "Pin 12 to LOW" it turn off the LED
  delay(1000); // Wait for 1000 miliseconds -> 1 second
} 
