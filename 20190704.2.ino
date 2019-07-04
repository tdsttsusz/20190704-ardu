//버튼 값에 따라 LED 켜고 끄기

const int ledPin=13;
const int digitalPin = 2;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(digitalPin, INPUT);

}

void loop() {
  int buttonInput = digitialRead(buttonPin);
  digitalWrite(ledPin,buttonInput);

}
