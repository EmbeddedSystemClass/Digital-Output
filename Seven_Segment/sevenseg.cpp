#include "sevenseg.h"
#include "ssdecode.h"
#include "arduino.h"

void sevenSegment::Display(char value)
{
  for(int i = 0; i< 7; i++)
  {
    if(Common == 'c' || Common == 'C')
      digitalWrite(segment[i], num[value][i]);
    if(Common == 'a' || Common == 'A')
      digitalWrite(segment[i], ~num[value][i]);
  }
}
void sevenSegment::Show(char number)
{
    value = number;
    digitalWrite(commonPin, 1);
    Display(value);    
}
void sevenSegment::On()
{
 // turn on 7 segment
}
void sevenSegment::setCommon(char common)
{
  Common = common;
}
void sevenSegment::Off()
{
 // turn off 7 segment
}
void sevenSegment::Init(int sega, int segb,
 int segc,int segd,
 int sege,int segf,
 int segg,int segdp, 
 int common)
{
  segment[0] = sega;
  segment[1] = segb;
  segment[2] = segc;
  segment[3] = segd;
  segment[4] = sege;
  segment[5] = segf;
  segment[6] = segg;
  segment[7] = segdp;
  commonPin = common;
  for(int i = 0; i < 8; i++)
  {
    pinMode(segment[i], OUTPUT);  
  }
  pinMode(commonPin, OUTPUT);  
}
