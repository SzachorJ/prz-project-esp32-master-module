#include <Arduino.h>

String analogReadCombine(String module1, String module2, String module3)
{
  String combine = module1;
  String combine += module2;
  String combine += module3;
  return combine;
}
void setup()
{
  // put your setup code here, to run once:
}

void loop()
{
  // put your main code here, to run repeatedly:
}