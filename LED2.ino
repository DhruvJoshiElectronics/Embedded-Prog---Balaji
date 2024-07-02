// Blink First LED (With Delay) 
// 2. Blink all the 8 LEDs (with delay) 
// 3. Glow the LEDs one by one (Do not off the LED) 
// 4. Glow the LEDs one by one(at a time one LED should glow) 
// 5. Glow the EVEN LEDs one by one (Do not off the LED) 
// 6. Glow the ODD LEDs one by one (Do not off the LED)
// 7. Glow 0 to 3 LEDs (one by one) 8. Glow all 8 LEDs
// 8. Glow 4 to 7 LEDs (one by one) 9. Glow all ODD no LEDs
// 9. Glow 3 to 0 LEDs (one by one) 10. Glow all EVEN no LEDs
// 10. Glow 7 to 4 LEDs (one by one)

//---------------------------------------xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx-----------------------
// This codes is for Part 1 & 2 
#include "Dhruv.h"
void setup() {
  // put your setup code here, to run once:
  initport();
}

void loop() {
    // put your main code here, to run repeatedly:
     volatile long i ;
     volatile char x ;
     x = 0xFF; //
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<1000000;i++);
}
//---------------------------------------xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx-----------------------
// This is the code for Part 3  
#include "Dhruv.h"
void setup() {
  // put your setup code here, to run once:
  initport();
}

void loop() {
    // put your main code here, to run repeatedly:
     volatile long i ;
     volatile char x ;
     x = 0x01; 
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x03;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x07;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x0F;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x1F;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x3F;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x7F;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0xFF;
     output(x);
     for(i=0;i<1000000;i++);
}
//---------------------------------------xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx-----------------------
// This is the Code for Part 4 
#include "Dhruv.h"
void setup() {
  // put your setup code here, to run once:
  initport();
}

void loop() {
    // put your main code here, to run repeatedly:
     volatile long i ;
     volatile char x ;
     x = 0x01; 
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x02;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x04;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x08;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x10;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x20;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x40;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x80;
     output(x);
     for(i=0;i<1000000;i++);
}






























  
