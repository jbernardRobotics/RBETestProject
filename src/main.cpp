#include <Arduino.h>

void setup()
{
  // put your setup code here, to run once:
}

void loop()
{
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  delay(1000);

  //This stuff is an addition with no conflicts
  //I'm going to make another branch and write over these comments
}