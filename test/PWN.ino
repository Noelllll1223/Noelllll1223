

const int led_pin = 6;

void setup() {
   Serial.begin(9600);
   pinMode(led_pin, OUTPUT);

}

void loop() {
 
    digitalWrite(led_pin, HIGH);
    delay(1);
    digitalWrite(led_pin, LOW);
    delay(10);

}