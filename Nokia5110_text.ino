
// Nokia5110_logo
// This program is a demo of how to display logo.
// You can also see how to use invert().
// web: http://www.circuitstoday.com/

// It is assumed that the LCD module is connected to
// the following pins

//      RST  - Pin 3
//      CE   - Pin 4
//      DC   - Pin 5
//      DIN  - Pin 6
//      CLK  - Pin 7




#include <Nokia5110.h>


Nokia5110 glcd(3,4,5,6,7);



void setup() 
{
 glcd.Initialize_LCD();

}

void loop() 
{
  glcd.Invert(true); //for inverting display
  glcd.allClear();
  glcd.setPointer(3,1);
  glcd.strDisp("Circuits today");
  delay(3000);

  glcd.Invert(false); 
  glcd.allClear();
  glcd.setPointer(3,1);
  glcd.strDisp("CircuitsToday");
  delay(3000);

}
