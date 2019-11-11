// This example code is in the public domain.
 

const int ledPin =  12;      // the number of the LED pin

// Vars
int ledState = LOW;             // ledState used to set the LED
long previousMillis = 0;        // will store last time LED was updated

// Uncomment for Flasher
long OnTime = 250;           // milliseconds of on-time
long OffTime = 750;          // milliseconds of off-time

// the follow variables is a long because the time, measured in miliseconds,
// will quickly become a bigger number than can be stored in an int.
long interval = 1000;           // interval at which to blink (milliseconds)

void setup() {
  // set the digital pin as output:
  pinMode(ledPin, OUTPUT);
}

//void loop()
{
  // Get time
  unsigned long currentMillis = millis();
 
  if(currentMillis - previousMillis > interval) {
    // save the last time you blinked the LED 
    previousMillis = currentMillis;   

    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW)
      ledState = HIGH;
    else
      ledState = LOW;

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin, ledState);
  }
}

//void loop()
//{
//  // check to see if it's time to change the state of the LED
//  unsigned long currentMillis = millis();
// 
//  if((ledState == HIGH) && (currentMillis - previousMillis >= OnTime))
//  {
//    ledState = LOW;  // Turn it off
//    previousMillis = currentMillis;  // Remember the time
//    digitalWrite(ledPin, ledState);  // Update the actual LED
//  }
//  else if ((ledState == LOW) && (currentMillis - previousMillis >= OffTime))
//  {
//    ledState = HIGH;  // turn it on
//    previousMillis = currentMillis;   // Remember the time
//    digitalWrite(ledPin, ledState);    // Update the actual LED
//  }
//}
