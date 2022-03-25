#include <IRremote.h>
int recivePin=2;
int F=0;
IRrecv irrecv(recivePin);
decode_results results;


void setup(){
    Serial.begin(9600);
    irrecv.enableIRIn();

}

void loop(){
    IRData* read();
    if(irrecv.decode(&results)){
        if(results.decode_type == NEC)
        
        Serial.println(results.address);
        delay(500);

    }
    
    
    /*if(irrecv.decode(&results)){
        if (results.decode_type == NEC){
            switch(results.value){
                case 0x00FF6897:
                Serial.println("press '0'");
                break;
                case 0x00FF30CF:
                Serial.println("press '1'");
                break;
                case 0x00FF18E7:
                Serial.println("press '2'");
                break;
                case 0x00FF7A85: // Key 3
                Serial.println("Press '3'"); // 시리얼통신으로 데이터 출력 "Press '3'"
                break;
                case 0x00FF10EF: // Key 4
                Serial.println("Press '4'"); // 시리얼통신으로 데이터 출력 "Press '4'"
                break;
                case 0x00FF38C7: // Key 5
                Serial.println("Press '5'"); // 시리얼통신으로 데이터 출력 "Press '5'"
                break;
                case 0x00FF5AA5: // Key 6
                Serial.println("Press '6'"); // 시리얼통신으로 데이터 출력 "Press '6'"
                break;
                case 0x00FF42BD: // Key 7
                Serial.println("Press '7'"); // 시리얼통신으로 데이터 출력 "Press '7'"
                break;
                case 0x00FF4AB5: // Key 8
                Serial.println("Press '8'"); // 시리얼통신으로 데이터 출력 "Press '8'"
                break;
                case 0x00FF52AD: // Key 9
                Serial.println("Press '9'"); // 시리얼통신으로 데이터 출력 "Press '9'"
                break;
                default:
                break;
            }
        }
         irrecv.resume();  // 다음 값 수신(Receive the next value)
    }*/
}
