int pin1 = 2;
int pin2 = 3;
int pin3 = 4;
int pin4 = 5;
int time = 500;
int i = -1;
void setup()
{
    Serial.begin(9600);

    pinMode(pin1, OUTPUT);
    pinMode(pin2, OUTPUT);
    pinMode(pin3, OUTPUT);
    pinMode(pin4, OUTPUT);
}

void loop()
{
    digitalWrite(pin4, LOW);
    digitalWrite(pin3, LOW);
    digitalWrite(pin2, LOW);
    digitalWrite(pin1, LOW);
    delay(time);

    i++;
    Serial.println(i);
    if ((i >= 15))
    {
        i = 0;
    }
    if ((i % 2) > 0)
    {
        digitalWrite(pin1, HIGH);
    }
    else
    {
        digitalWrite(pin1, LOW);
    }

    if ((i % 4) > 1)
    {
        digitalWrite(pin2, HIGH);
    }
    else
    {
        digitalWrite(pin2, LOW);
    }

    if ((i % 8) > 3)
    {
        digitalWrite(pin3, HIGH);
    }
    else
    {
        digitalWrite(pin3, LOW);
    }

    if ((i % 16) > 7)
    {
        digitalWrite(pin4, HIGH);
    }
    else
    {
        digitalWrite(pin4, LOW);
    }
    delay(time);
}