//ADC값 읽어보기

const int analogPin = A0;  //analogPin 상수에 A0번 핀을 할당합니다.

void setup() {
  Serial.begin(115200);  /Serial.begin 함수를 호출하여 시리얼 통신 속도를 1158200 bps로 설정합니다.
}

void loop() {
  int analogValue = analogRead(analogPin);
  // analogRead 함수를 이용하여 analogPin 값을 읽은 후, analogValue 변수에 저장합니다.
  //analogRead 함수는 인자로 넘어온 핀의 아날로그 값을 읽어내는 함수 입니다.
  //리턴 값은 0~1023 사이의 값이며 0~5V에 대응됩니다.
  Serial.println(analogValue);
}
