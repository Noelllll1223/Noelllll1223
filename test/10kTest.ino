#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setting(int data, int i){
    int q, w, e, r=0;
    q=(data)%10000 / 1000;
    w=(data%1000) / 100;
    e=(data%100) / 10;
    r=data%10;\
    lcd.setCursor(i,1);
    lcd.print(q);
    lcd.setCursor(i+1,1);
    lcd.print(w);
    lcd.setCursor(i+2,1);
    lcd.print(e);
    lcd.setCursor(i+3,1);
    lcd.print(r);
}

void setup(){
    Serial.begin(9600);
    lcd.init();
    lcd.backlight();
    lcd.clear();
}

void loop(){
    int senservalue = analogRead(A0);
    Serial.println(senservalue);
    lcd.setCursor(0,0);
    lcd.print("10k Test");
    setting(senservalue, 0);
}

