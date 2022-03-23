#include <LiquidCrystal_I2C_Hangul.h>

#include <LiquidCrystal_I2C.h>  // LiquidCrystal_I2C 헤더파일 호출
 // LCD의 address 주소 및 크기 입력
LiquidCrystal_I2C_Hangul lcd(0x27, 16, 2);
void setup()  // 초기화
{
  lcd.init();  // LCD 초기화
  lcd.backlight();  // LCD 백라이트 함수
}
void loop()  // 무한루프
{
  delay(1000);
  lcd.setCursor(0, 0); // 커서 첫번째칸 첫번재줄 위치
  lcd.print("Welcome to");  // Welcome to 문자 출력
  lcd.setCursor(3, 1); // 커서 네번째칸 두번째줄 위치
  lcd.print("the LK world!"); 
  delay(1000);
  lcd.clear();
  delay(1000);
  lcd.setCursor(0,0);
  lcd.print("Hello");
  lcd.setCursor(7,1);
  lcd.print("I2C Study");
  delay(1000);
  lcd.clear();
}