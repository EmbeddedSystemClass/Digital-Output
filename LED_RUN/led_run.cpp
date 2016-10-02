#include "led_run.h"
void LED_RUN::Pattern(String p) 
{
    iLed = 0;
    char  a = p[0];
    if(a == '1')
      iLed |= 0x08;
    a = p[1];
    if(a == '1')
      iLed |= 0x04;
    a = p[2];
    if(a == '1')
      iLed |= 0x02;
    a = p[3];
    if(a == '1')
      iLed |= 0x01;
}


void LED_RUN::Update()
{
    if(iLed & 0x01)
     led1.On();
    else 
     led1.Off();

    if(iLed & 0x02)
     led2.On();
    else 
     led2.Off();

    if(iLed & 0x04)
     led3.On();
    else 
     led3.Off();
     
    if(iLed & 0x08)
     led4.On();
    else 
     led4.Off();
}


void LED_RUN::RotateLeft(void)
{
  iLed <<= 1;
  char  x =  (iLed &  16) >>4;
  iLed |= x;
  Update();
}

void LED_RUN::RotateRight(void)
{
   char x = (iLed & 1);
    iLed >>=1;
  x <<=3;
  iLed |= x;
  Update();
}
