int Switch1_Pin=7;
int Switch2_Pin=8;
int Switch3_Pin=2;

int DIR1 = 3;
int DIR2 = 4;
int EN1 = 5;

void Motor_ccw(){
    digitalWrite(DIR1, HIGH);
    digitalWrite(DIR2, LOW);
    digitalWrite(EN1, HIGH);
}

void Motor_cw()
{
    digitalWrite(DIR1, LOW);
    digitalWrite(DIR2, HIGH);
    digitalWrite(EN1, HIGH);
}

void Motor_stop()
{
    digitalWrite(DIR1, HIGH);
    digitalWrite(DIR2,HIGH);
    digitalWrite(EN1, LOW);    
}

void setup()
{
    Serial.begin(9600);
    pinMode(Switch1_Pin, INPUT);
    pinMode(Switch2_Pin, INPUT);
    pinMode(Switch3_Pin, INPUT);

    pinMode(DIR1, OUTPUT);
    pinMode(DIR2, OUTPUT);
    pinMode(EN1, OUTPUT);
}

void loop(){
    if(digitalRead(Switch1_Pin)==LOW)
    {
        Motor_ccw();
    }
    else if(digitalRead(Switch2_Pin)==LOW)
    {
        Motor_cw();
    }
    else if(digitalRead(Switch3_Pin)==LOW)
    {
        Motor_stop();
    }
}