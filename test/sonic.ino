#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
int TRIG = 7;
int Echo = 6;

int Echosetting(int data){
    int q,w,e,r =0;
    q = (data)%10000 /1000;
    w = (data)%1000 / 100;
    e = (data)%100 / 10;
    r = (data)%10;
    lcd.setCursor(8,1);
    lcd.print(q);
    lcd.print(w);
    lcd.print(e);
    lcd.print(r);

}

int distance(){
    float return_time, howlong;
    digitalWrite(TRIG, HIGH);
    delay(5);
    digitalWrite(TRIG, LOW);
    return_time=pulseIn(Echo, HIGH);
    howlong = ((float)(340*return_time)/10000)/2;
    return howlong;
}

void setup(){
    lcd.init();
    lcd.backlight();
    Serial.begin(9600);
    pinMode(TRIG, OUTPUT);
    pinMode(Echo, INPUT);
}

void loop(){
    Serial.print(distance());
    lcd.setCursor(0,0);
    lcd.print("How far ?");
    Echosetting(distance());
    
    delay(300);
}