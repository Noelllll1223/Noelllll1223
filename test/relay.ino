const int relayPin = 2;
String comdata = "";
int lastLength = 0;

void setup()
{
    pinMode(relayPin, OUTPUT);
    Serial.begin(9600);
    Serial.print("Please input your command to control this Lamp: ");
}

void loop()
{
    digitalWrite(relayPin,HIGH);
    delay(5000);
    digitalWrite(relayPin,LOW);
    delay(5000);

    /*
    if (Serial.available()>0)
    {
        comdata ="";
        while (Serial.available()>0)
        {
            comdata += char(Serial.read());
            delay(2);
        }
        Serial.println(comdata);
    }
    if (comdata == "on")
    {
        digitalWrite(relayPin, HIGH);
    }
    else if(comdata == "off")
    {
        digitalWrite(relayPin, LOW);
    }
    else
    {
        Serial.println("Please input correct commamd !");
        delay(5000);
    }
    */
}