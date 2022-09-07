const int trigPin = 3;
const int echoPin = 2;
long duration;
int distance;
int i;
void setup()
{
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    for (i = 5; i <= 11; i++) // LED Pin 2 - 8
    {
        pinMode(i, OUTPUT);
    }

    Serial.begin(9600);
}
void loop()
{
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    duration = pulseIn(echoPin, HIGH);
    distance = duration * 0.034 / 2;
    Serial.print("Distance: ");
    Serial.println(distance);
    delay(1000);

    if (distance > 120)
    {
        for (i = 5; i <= 11; i++)
        {
            digitalWrite(i, LOW);
        }
    }
    if (distance > 110 && distance <= 120)
    {
        digitalWrite(5, HIGH);
        for (i = 6; i <= 11; i++)
        {
            digitalWrite(i, LOW);
        }
    }
    if (distance > 100 && distance <= 110)
    {
        for (i = 5; i <= 6; i++)
        {
            digitalWrite(i, HIGH);
        }
        for (i = 7; i <= 11; i++)
        {
            digitalWrite(i, LOW);
        }
    }
    if (distance > 90 && distance <= 100)
    {
        for (i = 5; i <= 7; i++)
        {
            digitalWrite(i, HIGH);
        }
        for (i = 8; i <= 11; i++)
        {
            digitalWrite(i, LOW);
        }
    }
    if (distance > 80 && distance <= 90)
    {
        for (i = 5; i <= 8; i++)
        {
            digitalWrite(i, HIGH);
        }
        for (i = 9; i <= 11; i++)
        {
            digitalWrite(i, LOW);
        }
    }
    if (distance > 70 && distance <= 80)
    {
        for (i = 5; i <= 9; i++)
        {
            digitalWrite(i, HIGH);
        }
        for (i = 10; i <= 11; i++)
        {
            digitalWrite(i, LOW);
        }
    }
    if (distance > 60 && distance <= 70)
    {
        for (i = 5; i <= 10; i++)
        {
            digitalWrite(i, HIGH);
        }
        digitalWrite(11, LOW);
    }
    if (distance > 0 && distance <= 60)
    {
        for (i = 5; i <= 11; i++)
        {
            digitalWrite(i, HIGH);
        }
    }
}
