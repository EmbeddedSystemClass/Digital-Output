// LED.h
class LED
{
    int ledPin;
  public:
    LED(int pin);
    LED();
    void Init(int pin);
    void On();
    void Off();
};
