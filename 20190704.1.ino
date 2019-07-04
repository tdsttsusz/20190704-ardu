//버튼 회로 구성하기

const int digitalPin = 2;

void setup() {
  Serial.begin(115200);

  pinMode(digitalPin, INPUT);

}

void loop() {
  int digitalValue = digitialRead(digitalPin);
  Serial.println(digitalValue);

}
