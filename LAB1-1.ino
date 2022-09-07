int incomingByte = 0;
int txt = 0;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    if (Serial.available() > 0)
    {
        incomingByte = Serial.read();
        if (isalnum(incomingByte))
        {
            Serial.print("I received: ");
            Serial.println(incomingByte, DEC);
        }
        if (isalpha(incomingByte))
        {
            Serial.print("The character is a letter");
        }
        if (isdigit(incomingByte))
        {
            Serial.print("The character is a number");
        }
    }
}