int i;
int incomingByte = 0;
void setup()
{
    Serial.begin(9600);
    for (i = 2; i <= 8; i++)
    {
        pinMode(i, OUTPUT);
    }
}

void loop()
{
    for (i = 2; i <= 8; i++)
    {
        digitalWrite(i, HIGH);
        delay(200);
        digitalWrite(i, LOW);
    }
    for (i = 7; i >= 3; i--)
    {
        digitalWrite(i, HIGH);
        delay(200);
        digitalWrite(i, LOW);
    }
}