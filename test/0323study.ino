#include <stdlib.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
int data[500]={};

void dataset(){
    
    for (int i=0; i<500; i++)
    {
        data[i] = rand();
    }    
}

void firstprint(){
for(int i=0; i<10; i++)
    {
        lcd.setCursor(i,0);
        lcd.print(data[i]);
    }
}
void Sprint(){
    for(int i=500; i>490; i--){
        lcd.setCursor(500-i,1);
        lcd.print(data[i]);
    }
}

void setup(){
    Serial.begin(9600);
    dataset();
    lcd.init();  // LCD 초기화
    lcd.backlight();  // LCD 백라이트 함수  
}


void loop(){ 
   firstprint();
   Sprint();
    
}