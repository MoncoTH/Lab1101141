int sensorValue = 0;
int i;
void setup()
{

    for (i = 2; i <= 8; i++) // LED Pin 2 - 8
    {
        pinMode(i, OUTPUT); 
    }
}

void loop()
{
    sensorValue = analogRead(A2);
    sensorValue = map(sensorValue, 0, 1023, 0, 7);

    delay(100);

    if (sensorValue == 0)
    {
        for (i = 2; i <= 8; i++)
        {
            digitalWrite(i, LOW);
        }
    }

    if (sensorValue == 1)
    {
        digitalWrite(2, HIGH);
        for (i = 3; i <= 8; i++)
        {
            digitalWrite(i, LOW);
        }
    }

    if (sensorValue == 2)
    {
        for (i = 2; i <= 3; i++)
        {
            digitalWrite(i, HIGH);
        }
        for (i = 4; i <= 8; i++)
        {
            digitalWrite(i, LOW);
        }
    }

    if (sensorValue == 3)
    {
        for (i = 2; i <= 4; i++)
        {
            digitalWrite(i, HIGH);
        }
        for (i = 5; i <= 8; i++)
        {
            digitalWrite(i, LOW);
        }
    }

    if (sensorValue == 4)
    {
        for (i = 2; i <= 5; i++)
        {
            digitalWrite(i, HIGH);
        }
        for (i = 6; i <= 8; i++)
        {
            digitalWrite(i, LOW);
        }
    }
    if (sensorValue == 5)
    {
        for (i = 2; i <= 6; i++)
        {
            digitalWrite(i, HIGH);
        }
        for (i = 7; i <= 8; i++)
        {
            digitalWrite(i, LOW);
        }
    }
    if (sensorValue == 6)
    {
        for (i = 2; i <= 7; i++)
        {
            digitalWrite(i, HIGH);
        }
        digitalWrite(8, LOW);
    }
    if (sensorValue == 7)
    {
        for (i = 2; i <= 8; i++)
        {
            digitalWrite(i, HIGH);
        }
    }
}