#include <Arduino.h>

void setup()
{
  // put your setup code here, to run once:
}

int helperTestFunction(int uselessValue1, int uselessValue2)
{
  return uselessValue1 * uselessValue2;
}

void loop()
{
  digitalWrite(2, HIGH);
  delay(1000);
  //Here is a test comment that will conflict
  //Here is a different comment tha that should conflict
  //Blah Blah, Blah Main
  digitalWrite(2, LOW);
  delay(1000);
  Serial.println(String(helperTestFunction(2, 3)));

  //This stuff is an addition with no conflicts TODO: make sure to use these todo statements to keep track of stuff
  //I'm going to make another branch and write over these comments!
}