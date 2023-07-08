int buttonPin = 11;
int ledPin = 12;
int buttonState = 0;
int lastButtonState = 0;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState != lastButtonState) {
    if (buttonState == HIGH) {
      digitalWrite(ledPin, !digitalRead(ledPin));
    }
    delay(50);
  }
  lastButtonState = buttonState;
}