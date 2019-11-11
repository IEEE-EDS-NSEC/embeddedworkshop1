/*
 * This is a simple interfacing demo of Infrared Proximity sensor with arduino.
 */
int IrSensor = 2; // connect to the data pin of IR sensor

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the ir sensors's pin an input:
  pinMode(IrSensor, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  int IrState = digitalRead(IrSensor);
  // print out the state of the button:
  Serial.println(IrState);
  delay(100);        // delay in between reads for stability
}
