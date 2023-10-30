const int analogInputPin = A0;  // 아날로그 입력 핀 설정

void setup() {
  Serial.begin(9600);  // 시리얼 통신 초기화
}

void loop() {
  int sensorValue = analogRead(analogInputPin);  // 아날로그 핀에서 값을 읽음
  float voltage = sensorValue * (5.0 / 1023.0);  // 아두이노의 기본 전압 범위는 0-5V
  Serial.print("아날로그 입력 값: ");
  Serial.println(sensorValue);
  Serial.print("전압 값: ");
  Serial.print(voltage, 2);  // 소수점 2자리까지 출력
  Serial.println("V");
  delay(1000);  // 1초마다 값을 측정
}
