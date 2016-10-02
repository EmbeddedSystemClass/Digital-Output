#include "sevenseg.h"
sevenSegment ss1;
void setup() {
  // put your setup code here, to run once:
  ss1.Init(1,2,3,4,5,6,7,8,13);
  ss1.setCommon('c');

  Serial.begin(9600);
}
void loop() 
{
  int i = 0;
  for (i = 0; i< 10; i++)
  {
    ss1.Show(i);
    delay(50);
  }  
}
