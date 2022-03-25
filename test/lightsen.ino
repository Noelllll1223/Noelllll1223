int LightPin = 0;
int L;
int TempPin = 1;
int T1;
float R1 = 10000;
float logR2, R2, T, Tc, Tf;
float c1 = 1.009249522e-03, c2 = 2.378405444e-04, c3 = 2.019202697e-07;
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
void Lsetting(int data, int i){
    int q, w, e, r=0;
    q=(data)%10000 / 1000;
    w=(data%1000) / 100;
    e=(data%100) / 10;
    r=data%10;\

    lcd.setCursor(1,i);
    lcd.print("Light : ");
    lcd.print(q);
    lcd.print(w);
    lcd.print(e);
    lcd.print(r);
}

void setup(){
    Serial.begin(9600);
    lcd.init();
    lcd.backlight();


}

void loop(){
    T1 = analogRead(TempPin);
    R2 = R1 * (1023.0 / (float)T1 - 1.0);
    logR2 = log(R2);
    T = (1.0 / (c1 + c2*logR2 + c3*logR2*logR2*logR2)); 
    Tc = T - 273.15; //C온도로 변환
    Tf = (Tc * 9.0)/ 5.0 + 32.0; // F온도로 변환
    L=analogRead(LightPin);
    Serial.print(L);
    lcd.setCursor(1,1);

    setting(L);
    delay(500);
}