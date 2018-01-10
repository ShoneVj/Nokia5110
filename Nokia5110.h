 /*Nokia5110.h - Simple example in creating your own Arduino Library

*/
 
#ifndef Nokia5110_h
#define Nokia5110_h
 

#include "Arduino.h"


 

 
class Nokia5110
{
public:
  boolean Invert_status;
  unsigned char CircuitsTodayLogo [504];
  unsigned char LookUpTable [93][5];
  Nokia5110(int rst, int ce,int dc, int din, int clk);  //Constructor. attach pins to Nokia 5110
  void Invert(bool inv);  //Invert display
  void dotPixel(unsigned char x,unsigned char y);  
  void allClear(void);
  void Initialize_LCD(void); 
  void setPointer(unsigned char row,unsigned char col);
  void charDisp(unsigned char ch);
  void strDisp(unsigned char *p);
  void logoDisp(unsigned char logo[]);
  void Cmd(unsigned char c);
  void Data(unsigned char d);
private:
  int RST,CE,DC,DIN,CLK;
  
};
 
#endif
