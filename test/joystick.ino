#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

int joystickx = 0;
int joysticky = 1;
int joystickc = 2;
int buttonState;
int lastState = LOW;
unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;


void setting(int data, int data2){
    int q, w, e, r=0;
    q=(data)%10000 / 1000;
    w=(data%1000) / 100;
    e=(data%100) / 10;
    r=data%10;
    int q2, w2, e2, r2=0;
    q2=(data2)%10000 / 1000;
    w2=(data2%1000) / 100;
    e2=(data2%100) / 10;
    r2=data2%10;
    

    lcd.setCursor(0,0);
    lcd.print("X : ");
    lcd.print(q);
    lcd.print(w);
    lcd.print(e);
    lcd.print(r);
    lcd.setCursor(0,1);
    lcd.print("Y : ");
    lcd.print(q2);
    lcd.print(w2);
    lcd.print(e2);
    lcd.print(r2);
    

}

void setup(){
    lcd.init();
    lcd.backlight();
    pinMode(joystickc, INPUT_PULLUP);
}
void loop(){
    int x = analogRead(joystickx);
    int y = analogRead(joysticky);
    int c = digitalRead(joystickc);
    setting(x,y);
    lcd.setCursor(10,0);
    lcd.print("C : ");
    lcd.print(c);
    delay(100);
    

}