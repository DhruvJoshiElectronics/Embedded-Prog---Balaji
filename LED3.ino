

// 2. Glow the LEDs in following order
// 0,4 delay – 1,5 delay – 2,6 delay – 3,7 delay
// 3. Glow 0 to 7 LEDs with delay and 7 to 0 LEDs with
// delay
// 4. Glow 0,2,1,3,4,6,5,7 LEDs with delay
// 5. Glow the LEDs in following order
// 0,1 delay – 6,7, delay – 2,3, delay – 4,5, delay
// 6. Glow the LEDs in following order
// 4,5 delay – 2,3, delay – 6,7, delay – 0,1, delay
//--------------------------xxxxxxxxxxxxxxxxxxxxxxxxx--------------------------
//The code for part 1
#include "Dhruv.h"
void setup() {
  // put your setup code here, to run once:
  initport();
}

void loop() {
    // put your main code here, to run repeatedly:
     volatile long i ;
     volatile char x ;
     x = 0x88; 
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x44;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x22;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x01;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<1000000;i++);
}
//--------------------------xxxxxxxxxxxxxxxxxxxxxxxxx--------------------------
// The code for Part 2 
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
     x = 0x00;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x03;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x07;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x0F;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x1F;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x3F;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x7F;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0xFF;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<1000000;i++);
}
//-----------------------------xxxxxxxxxxxxxxxxxxxxxxx-----------------------
// This is the code for part 3 
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
     x = 0x00;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x03;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x07;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x0F;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x1F;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x3F;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x7F;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0xFF;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<1000000;i++);
}
//-----------------------------xxxxxxxxxxxxxxxxxxxxxxx-----------------------
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
     x = 0x00;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x04;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x02;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x08;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x10;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x20;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x80;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x40;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<1000000;i++);
}
//--------------------------xxxxxxxxxxxxxxxxxxxxxxxxx--------------------------
// The code for part 6 and 7 
#include "Dhruv.h"
void setup() {
  // put your setup code here, to run once:
  initport();
}
 // Glow 0,2,1,3,4,6,5,7 LEDs with delay
void loop() {
    // put your main code here, to run repeatedly:
     volatile long i ;
     volatile char x ;
     x = 0x03; 
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0xC0;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x0C;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x18;
     output(x);
     for(i=0;i<1000000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<1000000;i++);
}
//----------------------------------------xxxxxxxxxxxxxxxxxxxxxx---------------------------



