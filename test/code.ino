int led0_Pin = 0;  // 1번째 LED
int led1_Pin = 1;  // 2번째 LED
int led2_Pin = 2;  // 3번째 LED
int led3_Pin = 3;  // 4번째 LED
int led4_Pin = 4;  // 5번째 LED
int button0_Pin = 8;   // 1번째 스위치
int button1_Pin = 9;   // 2번째 스위치
int button2_Pin = 10;  // 3번째 스위치
int button3_Pin = 11;  // 4번째 스위치
int button4_Pin = 12;  // 5번째 스위치
void led_SOS(int l){
    digitalWrite(l, HIGH);  // 1번째 LED ON
    delay(200);
    digitalWrite(l, LOW);
    delay(200);
    digitalWrite(l, HIGH);
    delay(200);
    digitalWrite(l, LOW);
    delay(200);
    digitalWrite(l, HIGH);
    delay(200);
    digitalWrite(l, LOW);
    delay(200);
    digitalWrite(l, HIGH);
    delay(1000);
    digitalWrite(l, LOW);
    delay(200);
    digitalWrite(l, HIGH);
    delay(1000);
    digitalWrite(l, LOW);
    delay(200);
    digitalWrite(l, HIGH);
    delay(1000);
    digitalWrite(l, LOW);
    delay(200);
    digitalWrite(l, HIGH);
    delay(200);
    digitalWrite(l, LOW);
    delay(200);
    digitalWrite(l, HIGH);
    delay(200);
    digitalWrite(l, LOW);
    delay(200);
    digitalWrite(l, HIGH);
    delay(200);
    digitalWrite(l, LOW);
    delay(200);
}

void led_SOS_MAX(int l, int q, int w, int e, int r){
    digitalWrite(l, HIGH);
    digitalWrite(q, HIGH);
    digitalWrite(w, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(r, HIGH);  // 1번째 LED ON
    delay(200);
    digitalWrite(l, LOW);
    digitalWrite(q, LOW);
    digitalWrite(w, LOW);
    digitalWrite(e, LOW);
    digitalWrite(r, LOW);
    delay(200);
    digitalWrite(l, HIGH);
    digitalWrite(q, HIGH);
    digitalWrite(w, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(r, HIGH);
    delay(200);
    digitalWrite(l, LOW);
    digitalWrite(q, LOW);
    digitalWrite(w, LOW);
    digitalWrite(e, LOW);
    digitalWrite(r, LOW);
    delay(200);
    digitalWrite(l, HIGH);
    digitalWrite(q, HIGH);
    digitalWrite(w, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(r, HIGH);
    delay(200);
    digitalWrite(l, LOW);
    digitalWrite(q, LOW);
    digitalWrite(w, LOW);
    digitalWrite(e, LOW);
    digitalWrite(r, LOW);
    delay(200);
    digitalWrite(l, HIGH);
    digitalWrite(q, HIGH);
    digitalWrite(w, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(r, HIGH);
    delay(1000);
    digitalWrite(l, LOW);
    digitalWrite(q, LOW);
    digitalWrite(w, LOW);
    digitalWrite(e, LOW);
    digitalWrite(r, LOW);
    delay(200);
    digitalWrite(l, HIGH);
    digitalWrite(q, HIGH);
    digitalWrite(w, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(r, HIGH);
    delay(1000);
    digitalWrite(l, LOW);
    digitalWrite(q, LOW);
    digitalWrite(w, LOW);
    digitalWrite(e, LOW);
    digitalWrite(r, LOW);
    delay(200);
    digitalWrite(l, HIGH);
    digitalWrite(q, HIGH);
    digitalWrite(w, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(r, HIGH);
    delay(1000);
    digitalWrite(l, LOW);
    digitalWrite(q, LOW);
    digitalWrite(w, LOW);
    digitalWrite(e, LOW);
    digitalWrite(r, LOW);
    delay(200);
    digitalWrite(l, HIGH);
    digitalWrite(q, HIGH);
    digitalWrite(w, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(r, HIGH);
    delay(200);
    digitalWrite(l, LOW);
    digitalWrite(q, LOW);
    digitalWrite(w, LOW);
    digitalWrite(e, LOW);
    digitalWrite(r, LOW);
    delay(200);
    digitalWrite(l, HIGH);
    digitalWrite(q, HIGH);
    digitalWrite(w, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(r, HIGH);
    delay(200);
    digitalWrite(l, LOW);
    digitalWrite(q, LOW);
    digitalWrite(w, LOW);
    digitalWrite(e, LOW);
    digitalWrite(r, LOW);
    delay(200);
    digitalWrite(l, HIGH);
    digitalWrite(q, HIGH);
    digitalWrite(w, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(r, HIGH);
    delay(200);
    digitalWrite(l, LOW);
    digitalWrite(q, LOW);
    digitalWrite(w, LOW);
    digitalWrite(e, LOW);
    digitalWrite(r, LOW);
    delay(200);
}

void setup()  // 초기화
{
  pinMode(led0_Pin, OUTPUT);  // 1번째 LED 핀(Pin) 출력 포트 설정
  pinMode(led1_Pin, OUTPUT);  // 2번째 LED 핀(Pin) 출력 포트 설정
  pinMode(led2_Pin, OUTPUT);  // 3번째 LED 핀(Pin) 출력 포트 설정
  pinMode(led3_Pin, OUTPUT);  // 4번째 LED 핀(Pin) 출력 포트 설정
  pinMode(led4_Pin, OUTPUT);  // 5번째 LED 핀(Pin) 출력 포트 설정
  pinMode(button0_Pin, INPUT);  // 1번째 스위치 핀(Pin) 입력 포트 설정
  pinMode(button1_Pin, INPUT);  // 2번째 스위치 핀(Pin) 입력 포트 설정
  pinMode(button2_Pin, INPUT);  // 3번째 스위치 핀(Pin) 입력 포트 설정
  pinMode(button3_Pin, INPUT);  // 4번째 스위치 핀(Pin) 입력 포트 설정
  pinMode(button4_Pin, INPUT);  // 5번째 스위치 핀(Pin) 입력 포트 설정
}
/* 스위치를 누를 시에 LED가 켜지도록 한다 */
void loop()  // 무한 루프
{
  if (digitalRead(button0_Pin) == LOW)  // 1번째 스위치를 누르면
  {
    led_SOS(0);
  }
  else digitalWrite(led0_Pin, LOW);  // 1번째 LED OF
  if (digitalRead(button1_Pin) == LOW)  // 2번째 스위치를 누르면
  {

    led_SOS(0);
    led_SOS(1);
    led_SOS(2);
    led_SOS(3);
    led_SOS(4);


  }
  else digitalWrite(led4_Pin, LOW);  // 2번째 LED OFF
  if (digitalRead(button2_Pin) == LOW)  // 3번째 스위치를 누르면
  {
    led_SOS_MAX(0,1,2,3,4);  // 3번째 LED ON
  }
  else digitalWrite(led2_Pin, LOW);  // 3번째 LED OFF
  if (digitalRead(button3_Pin) == LOW)  // 4번째 스위치를 누르면
  {
    digitalWrite(led3_Pin, HIGH);  // 4번째 LED ON
  }
  else digitalWrite(led3_Pin, LOW);  // 4번째 LED OFF
  if (digitalRead(button4_Pin) == LOW)  // 5번째 스위치를 누르면
  {
    digitalWrite(led4_Pin, HIGH);  // 5번째 LED ON
  }
  else digitalWrite(led4_Pin, LOW);  // 5번째 LED OFF
}