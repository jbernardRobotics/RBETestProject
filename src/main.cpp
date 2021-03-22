#include <Arduino.h>

void setup()
{
  // put your setup code here, to run once:
}

/**
 *
 *@param uselessValue1 this is a parameter for this helper function. Make sure to do a double star when you want this
**/
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
  //! this is an alert - Dont do something/something is broken
  //TODO: this is a todo. We should make gitIssues for these things if we want to
  //? This is a question. Someone could leave this for themselves or others
  //*Important stuff is this cool mint color
  //
}