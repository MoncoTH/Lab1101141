int latchPin = 5;
int clockPin = 6;
int dataPin = 4;
int b0 = 0, b1 = 0, b2 = 0, b3 = 0;
int g0 = 0, g1 = 0, g2 = 0, g3 = 0;
byte leds = 0;

int timr = 2000;

int i = 0;
/*
   setup() - this function runs once when you turn your Arduino on
   We initialize the serial connection with the computer
*/
void setup()
{
  Serial.begin(9600);

  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
}

/*
   loop() - this function runs over and over again
*/
void loop()
{

  // Serial.println(i);

  leds = 0;

  updateShiftRegister();
  if ((i % 2) > 0)
  {
    bitSet(leds, 3);
    b0 = 1;
  }
  else
  {
    b0 = 0;
  }

  if ((i % 4) > 1)
  {
    bitSet(leds, 2);
    b1 = 1;
  }
  else
  {
    b1 = 0;
  }

  if ((i % 8) > 3)
  {
    bitSet(leds, 1);
    b2 = 1;
  }
  else
  {
    b2 = 0;
  }

  if ((i % 16) > 7)
  {
    bitSet(leds, 0);
    b3 = 1;
  }
  else
  {
    b3 = 0;
  }

  g0 = b1 ^ b0;
  g1 = b1 ^ b2;
  g2 = b3 ^ b2;
  g3 = b3;

  if (g0 == 1)
  {
    bitSet(leds, 7);
  }
  if (g1 == 1)
  {
    bitSet(leds, 6);
  }
  if (g2 == 1)
  {
    bitSet(leds, 5);
  }
  if (g3 == 1)
  {
    bitSet(leds, 4);
  }

  /*
   Serial.print(n3);
   Serial.print(n2);
   Serial.print(n1);
   Serial.print(n0);
   Serial.println("");
   */

  updateShiftRegister();
  Serial.println(i);
  delay(timr);

  if ((i >= 15))
  {
    i = 0;
  }

  i++;
}

void updateShiftRegister()
{
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, leds);
  digitalWrite(latchPin, HIGH);
}
