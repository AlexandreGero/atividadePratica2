const int switchButton = 2;
const int buttonPin1 = 4;
const int buttonPin2 = 7;
int buttonState = 0;
int value = 0;

void setup() {
  pinMode(switchButton, INPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
}

void loop() {
  buttonState = digitalRead(switchButton);
  if (buttonState == HIGH) {
    digitalWrite(buttonPin1, HIGH);
    digitalWrite(buttonPin2, LOW);
  }
  else {
    digitalWrite(buttonPin1, LOW);
    digitalWrite(buttonPin2, HIGH);
  }
  value = map(analogRead(A4),0,1023,0,255);
  analogWrite(3, value);
}