#define segA 9  // 'a' 세그먼트 연결 핀 번호
#define segB 7  // 'b' 세그먼트 연결 핀 번호
#define segC 5  // 'c' 세그먼트 연결 핀 번호
#define segD 3  // 'd' 세그먼트 연결 핀 번호
#define segE 12  // 'e' 세그먼트 연결 핀 번호
#define segF 8  // 'f' 세그먼트 연결 핀 번호
#define segG 6  // 'g' 세그먼트 연결 핀 번호
#define segDP 4 // 'dp' 세그먼트 연결 핀 번호
 
#define digit1 10 // 1st digit 연결 핀번호
#define digit2 11 // 2nd digit 연결 핀번호
#define digit3 12 // 3rd digit 연결 핀번호
#define digit4 13 // 4th digit 연결 핀번호
 
/// main 함수에서 처리 편하게 하기 위해 핀번호 배열을 생성
int fndPort[8] = {segA, segB, segC, segD, segE, segF, segG, segDP};
int fndDigit[4] = {digit1, digit2, digit3, digit4};
 
int delayTime = 500;
 
// index 0-9 -> 숫자 1~9
// index 10 -> Blank
int fndData[11][8] = {
                    { 0, 0, 0, 0, 0, 0, 1, 1 }, // 0
                    { 1, 0, 0, 1, 1, 1, 1, 1 }, // 1
                    { 0, 0, 1, 0, 0, 1, 0, 1 }, // 2
                    { 0, 0, 0, 0, 1, 1, 0, 1 }, // 3
                    { 1, 0, 0, 1, 1, 0, 0, 1 }, // 4
                    { 0, 1, 0, 0, 1, 0, 0, 1 }, // 5
                    { 0, 1, 0, 0, 0, 0, 0, 1 }, // 6
                    { 0, 0, 0, 1, 1, 0, 1, 1 }, // 7
                    { 0, 0, 0, 0, 0, 0, 0, 1 }, // 8
                    { 0, 0, 0, 0, 1, 0, 0, 1 }, // 9
                    { 1, 1, 1, 1, 1, 1, 1, 1 }, // 10 - blank
                };   
 
void setup(){
    // SEGMENT 핀 출력모드로 설정
    for(int i = 0 ; i < 8 ; i++)
    {
        pinMode(fndPort[i],OUTPUT);
    }
    // 공통 Digit 핀 출력 모드로 설정
    pinMode(digit1, OUTPUT);
    pinMode(digit2, OUTPUT);
    pinMode(digit3, OUTPUT);
    pinMode(digit4, OUTPUT);
    // FND 모두 끄기 - 공통-애노드 타입으로 LOW 출력시 OFF
    digitalWrite(digit1, LOW);
    digitalWrite(digit2, LOW);
    digitalWrite(digit3, LOW);
    digitalWrite(digit4, LOW);
}
 
void loop(){
    // 첫째 자리 FND 숫자 1출력
    for(int j = 0 ; j < 8 ; j++){
        digitalWrite(fndPort[j], fndData[0][j]); 
    }
    digitalWrite(digit1, HIGH);
    delay(1000);
 
    fndOff(); //fnd 모두 끄기
 
    // 둘째 자리 FND 숫자 2출력
    for(int j = 0 ; j < 8 ; j++){
        digitalWrite(fndPort[j], fndData[2][j]); 
    }
    digitalWrite(digit1, HIGH);
    delay(1000);
 
    fndOff(); //fnd 모두 끄기
 
    // 셋째 자리 FND 숫자 3출력
    for(int j = 0 ; j < 8 ; j++){
        digitalWrite(fndPort[j], fndData[3][j]); 
    }
    digitalWrite(digit1, HIGH);
    delay(1000);
 
    fndOff(); //fnd 모두 끄기
 
    // 넷째 자리 FND 숫자 4출력
    for(int j = 0 ; j < 8 ; j++){
        digitalWrite(fndPort[j], fndData[4][j]); 
    }
    digitalWrite(digit1, HIGH);
    delay(1000);
 
    fndOff(); //fnd 모두 끄기
}
 
void fndOff(){ // FND 모두 끄기
    digitalWrite(digit1, LOW);
    digitalWrite(digit2, LOW);
    digitalWrite(digit3, LOW);
    digitalWrite(digit4, LOW);
}