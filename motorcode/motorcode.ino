// put global scope constants here
const int enableMotor = 3; // connect to enable1 (EN1) pin of L293d
const int inputPin1 = 4; // connect to IN1 pin of L293d
const int inputPin2 = 7; // connect to IN2 pin of L293d

void setup() {
  // put your setup code here, to run once:
  pinMode(enableMotor, OUTPUT);
  pinMode(inputPin1, OUTPUT);
  pinMode(inputPin2, OUTPUT);

  // initially turn off motors
  digitalWrite(inputPin1, LOW);
  digitalWrite(inputPin2, LOW);
}

void brake() {
  digitalWrite(inputPin1, LOW);
  digitalWrite(inputPin2, LOW);
}

void movefwd() {
  digitalWrite(inputPin1, HIGH);
  digitalWrite(inputPin2, LOW);
}

void movebwd() {
  digitalWrite(inputPin1, LOW);
  digitalWrite(inputPin2, HIGH);
}

void speedUpfwd() {
  movefwd();
  for (int i = 0; i < 256; i++) {
    analogWrite(enableMotor, i);
    delay(50);
  }
}

void speedUpbwd() {
  movebwd();
  for (int i = 0; i < 256; i++) {
    analogWrite(enableMotor, i);
    delay(50);
  }
}

void speedDownfwd() {
  movefwd();
  for (int i = 255; i >= 0; i--) {
    analogWrite(enableMotor, i);
    delay(50);
  }
}

void speedDownbwd() {
  movebwd();
  for (int i = 255; i >= 0; i--) {
    analogWrite(enableMotor, i);
    delay(50);
  }
}
void loop() {
  // put your main code here, to run repeatedly:
  speedUpfwd();
  delay(1000);
  speedDownfwd();
  delay(1000);

}
