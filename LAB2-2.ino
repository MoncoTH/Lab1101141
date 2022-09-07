int Number = 0;
int ButtonUp = 0;
void setup()
{
    Serial.begin(9600);
    pinMode(4, INPUT);
    pinMode(3, INPUT);
    pinMode(13, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(6, OUTPUT);
    
}

void loop()
{
    ButtonUp = digitalRead(4);
    if (ButtonUp == 1)
    {
        Number += 1;
        delay(250);
    }
    Serial.println(Number);
    if (Number == 0)
    {
        digitalWrite(13, LOW);
        digitalWrite(12, HIGH);
        digitalWrite(11, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(9, HIGH);
        digitalWrite(8, HIGH);
        digitalWrite(7, HIGH);
        digitalWrite(6, LOW);
    }
    if (Number == 1)
    {
        digitalWrite(13, LOW);
        digitalWrite(12, LOW);
        digitalWrite(11, LOW);
        digitalWrite(10, HIGH);
        digitalWrite(9, LOW);
        digitalWrite(8, LOW);
        digitalWrite(7, HIGH);
        digitalWrite(6, LOW);
    }
    if (Number == 2)
    {
        digitalWrite(13, HIGH);
        digitalWrite(12, LOW);
        digitalWrite(11, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(9, HIGH);
        digitalWrite(8, HIGH);
        digitalWrite(7, LOW);
        digitalWrite(6, LOW);
    }
    if (Number == 3)
    {
        digitalWrite(13, HIGH);
        digitalWrite(12, LOW);
        digitalWrite(11, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(9, LOW);
        digitalWrite(8, HIGH);
        digitalWrite(7, HIGH);
        digitalWrite(6, LOW);
    }
    if (Number == 4)
    {
        digitalWrite(13, HIGH);
        digitalWrite(12, HIGH);
        digitalWrite(11, LOW);
        digitalWrite(10, HIGH);
        digitalWrite(9, LOW);
        digitalWrite(8, LOW);
        digitalWrite(7, HIGH);
        digitalWrite(6, LOW);
    }
    if (Number == 5)
    {
        digitalWrite(13, HIGH);
        digitalWrite(12, HIGH);
        digitalWrite(11, HIGH);
        digitalWrite(10, LOW);
        digitalWrite(9, LOW);
        digitalWrite(8, HIGH);
        digitalWrite(7, HIGH);
        digitalWrite(6, LOW);
    }
    if (Number == 6)
    {
        digitalWrite(13, HIGH);
        digitalWrite(12, HIGH);
        digitalWrite(11, HIGH);
        digitalWrite(10, LOW);
        digitalWrite(9, HIGH);
        digitalWrite(8, HIGH);
        digitalWrite(7, HIGH);
        digitalWrite(6, LOW);
    }
    if (Number == 7)
    {
        digitalWrite(13, LOW);
        digitalWrite(12, LOW);
        digitalWrite(11, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(9, LOW);
        digitalWrite(8, LOW);
        digitalWrite(7, HIGH);
        digitalWrite(6, LOW);
    }
    if (Number == 8)
    {
        digitalWrite(13, HIGH);
        digitalWrite(12, HIGH);
        digitalWrite(11, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(9, HIGH);
        digitalWrite(8, HIGH);
        digitalWrite(7, HIGH);
        digitalWrite(6, LOW);
    }
    if (Number == 9)
    {
        digitalWrite(13, HIGH);
        digitalWrite(12, HIGH);
        digitalWrite(11, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(9, LOW);
        digitalWrite(8, HIGH);
        digitalWrite(7, HIGH);
        digitalWrite(6, LOW);
    }
    if (Number == 10)
    {
        Number = 0;
    }
}