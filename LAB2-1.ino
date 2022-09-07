int Number = 0;
int ButtonUp = 0;
int ButtonDown = 0;
int i;
void setup(){
    Serial.begin(9600);
    pinMode(2, INPUT);
    pinMode(3, INPUT);
    for (i = 4; i <= 9; i++)
    {
        pinMode(i, HIGH);
    }
}

void loop(){
    ButtonUp = digitalRead(2);
    ButtonDown = digitalRead(3);
    if (ButtonUp == 1){
        Number += 1;
        delay(250);
    }
    if (ButtonDown == 1){
        Number += -1;
        delay(250);
    }
    Serial.println(Number);
    if (Number == 0){
        for (i = 4; i <= 9; i++)
        {
            digitalWrite(i, LOW);
        }
    }
    if (Number == 1){
        digitalWrite(4, HIGH);
        for (i = 5; i <= 9; i++)
        {
            digitalWrite(i, LOW);
        }
    }
    if (Number == 2){
        for (i = 4; i <= 5; i++)
        {
            digitalWrite(i, HIGH);
        }
        for (i = 6; i <= 9; i++)
        {
            digitalWrite(i, LOW);
        }
    }
    if (Number == 3){
        for (i = 4; i <= 6; i++)
        {
            digitalWrite(i, HIGH);
        }
        for (i = 7; i <= 9; i++)
        {
            digitalWrite(i, LOW);
        }
    }
    if (Number == 4){
        for (i = 4; i <= 7; i++)
        {
            digitalWrite(i, HIGH);
        }
        for (i = 8; i <= 9; i++)
        {
            digitalWrite(i, LOW);
        }
    }
    if (Number == 5)
    {
        for (i = 4; i <= 8; i++)
        {
            digitalWrite(i, HIGH);
        }
        digitalWrite(9, LOW);
    }
    if (Number == 6)
    {
        for (i = 4; i <= 9; i++)
        {
            digitalWrite(i, HIGH);
        }
    }
}