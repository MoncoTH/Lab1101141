float temp;

void setup()
{
    Serial.begin(9600);
    pinMode(12, OUTPUT); // LED
    pinMode(5, OUTPUT);  // NPN
    pinMode(11, INPUT);  // PIR
    pinMode(A0, INPUT);  // TMP
}

void loop()
{
    int value = digitalRead(11);
    temp = analogRead(A0);
    temp = float(temp * 0.48828125);
    Serial.print("TEMPERATURE = ");
    Serial.print(temp);
    Serial.print(" C\n");
    if (value == HIGH)
    {
        digitalWrite(12, HIGH);
        analogWrite(5, 10);
    }
    else if (value == HIGH || temp > 25)
    {
        analogWrite(5, 150);
    }
    if (value == LOW)
    {
        digitalWrite(12, LOW);
        analogWrite(5, LOW);
    }
}
