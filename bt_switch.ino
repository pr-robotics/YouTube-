#include <SoftwareSerial.h>
SoftwareSerial bluetooth(0, 1);

char BT_input;
const int Relay = 2;
void setup()
{
  bluetooth.begin(9600);
  pinMode(Relay, OUTPUT);
}

void loop()
{
  if (bluetooth.available())
  {
    BT_input = bluetooth.read();

    if (BT_input == 'F')
      digitalWrite(Relay, LOW);

    else if (BT_input == 'B')
      digitalWrite(Relay, HIGH);
  }
}
