// LED.cpp
LED::LED(int pin)
{
  ledPin = pin;
  pinMode(pin, OUTPUT); // set LED  pin as OUTPUT
}
LED::LED()
{
}
void LED::On()
{
  digitalWrite(ledPin, HIGH);
}

void LED::Off()
{
  digitalWrite(ledPin, LOW);
}
