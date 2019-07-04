/*****************************
2016.06.14 deneb21
2 Led Control by 2 Switch 
http://deneb21.tistory.com/377
******************************/
 
//LED 핀설정
int led1 = 6;
int led2 = 7;
 
//스위치 핀설정
int sw1 = 10;
int sw2 = 11;
 
void setup() {
  //시리얼 모니터
  Serial.begin(9600); 
  //LED 1,2를 OUTPUT 으로 설정
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  //SW 1,2를 설정, 아두이노 풀업저항 사용
  pinMode(sw1,INPUT_PULLUP);
  pinMode(sw2,INPUT_PULLUP);
}
 
void loop() {
  //SW1 ON, SW2 OFF => LED1 ON, LED2 OFF
  if(digitalRead(sw1)==LOW && digitalRead(sw2)==HIGH) {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    Serial.println("SW1 ON");
  //SW1 OFF, SW2 ON => LED1 OFF, LED2 ON  
  } else if(digitalRead(sw1)==HIGH && digitalRead(sw2)==LOW) {
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    Serial.println("SW2 ON");
  //SW1 ON, SW2 ON => LED1 ON, LED2 ON  
  } else if(digitalRead(sw1)==LOW && digitalRead(sw2)==LOW) {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    Serial.println("SW1,2 ON");
  //SW1 OFF, SW2 OFF => LED1 OFF, LED2 OFF    
  } else {
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    Serial.println("NO SW");
  }
}
