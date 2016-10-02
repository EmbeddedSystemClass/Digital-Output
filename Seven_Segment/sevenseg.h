class sevenSegment
{
 char value;   // segment value
 bool status;        // On/Off
 int segment[8];     // pin no for each segment
 int commonPin; // common pin number
        char Common;
 public:
 void Show(char number);
 void Display(char number);
 void On();
 void Off();
        void setCommon(char common);
 void Init(int sega, int segb, int segc,int segd,
 int sege,int segf, int segg,int segdp, int common);
};
