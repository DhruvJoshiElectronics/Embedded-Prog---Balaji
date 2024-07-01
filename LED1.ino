// Glow LSB LED only (bit 0)                                                                                 
// 2. Glow MSB LED only (bit 7)
// 3. Glow LSB 2 LEDs only (bit 0 & bit 1)
// 4. Glow MSB 2 LEDs only (bit 7 & bit 6)
// 5. Glow LSB 4 LEDs only (bit 0 to bit 3)
// 6. Glow MSB 4 LEDs only (bit 7 to bit 4)
// 7. Glow all 8 LEDs
// 8. Glow all ODD no LEDs
// 9. Glow all EVEN no LEDs
// 10. Glow LEDs of bit7, bit4, bit3, bit1

// The Header File : 
void initport(void);
void output(char);

void initport()
{
  volatile char *port_dir = 0x30;
  *port_dir = 0xFF;
}

void output(char x)
{
  volatile char *port_data = 0x31;
  *port_data = x;
}
//----------------------------------------------------------------xxxxxxxxxxxxxxxxxxxxxxxxxxxx------------------------------------------------------------
// The Code for Part 1 : 

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
     for(i=0;i<100000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<100000;i++);
}
//----------------------------------------------------------------xxxxxxxxxxxxxxxxxxxxxxxxxxxx------------------------------------------------------------
// The Code for Part 2
  #include "Dhruv.h"
void setup() {
  // put your setup code here, to run once:
  initport();
}

void loop() {
    // put your main code here, to run repeatedly:
     volatile long i ;
     volatile char x ;
     x = 0x03;
     output(x);
     for(i=0;i<100000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<100000;i++);
}
//----------------------------------------------------------------xxxxxxxxxxxxxxxxxxxxxxxxxxxx------------------------------------------------------------
// The Code for Part 3 
#include "Dhruv.h"
void setup() {
  // put your setup code here, to run once:
  initport();
}

void loop() {
    // put your main code here, to run repeatedly:
     volatile long i ;
     volatile char x ;
     x = 0xC0;
     output(x);
     for(i=0;i<100000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<100000;i++);
}
//----------------------------------------------------------------xxxxxxxxxxxxxxxxxxxxxxxxxxxx------------------------------------------------------------
// The Code for Part 4 
#include "Dhruv.h"
void setup() {
  // put your setup code here, to run once:
  initport();
}

void loop() {
    // put your main code here, to run repeatedly:
     volatile long i ;
     volatile char x ;
     x = 0xC0;
     output(x);
     for(i=0;i<100000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<100000;i++);
}
//----------------------------------------------------------------xxxxxxxxxxxxxxxxxxxxxxxxxxxx------------------------------------------------------------
// This is the Code for Part 5 
#include "Dhruv.h"
void setup() {
  // put your setup code here, to run once:
  initport();
}

void loop() {
    // put your main code here, to run repeatedly:
     volatile long i ;
     volatile char x ;
     x = 0x07;
     output(x);
     for(i=0;i<100000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<100000;i++);
}
//----------------------------------------------------------------xxxxxxxxxxxxxxxxxxxxxxxxxxxx------------------------------------------------------------
// This is the code for Part 6 
#include "Dhruv.h"
void setup() {
  // put your setup code here, to run once:
  initport();
}

void loop() {
    // put your main code here, to run repeatedly:
     volatile long i ;
     volatile char x ;
     x = 0xF0;
     output(x);
     for(i=0;i<100000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<100000;i++);
}
//----------------------------------------------------------------xxxxxxxxxxxxxxxxxxxxxxxxxxxx------------------------------------------------------------
// This is the code for Part 7
#include "Dhruv.h"
void setup() {
  // put your setup code here, to run once:
  initport();
}

void loop() {
    // put your main code here, to run repeatedly:
     volatile long i ;
     volatile char x ;
     x = 0xFF;
     output(x);
     for(i=0;i<100000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<100000;i++);
}
//----------------------------------------------------------------xxxxxxxxxxxxxxxxxxxxxxxxxxxx------------------------------------------------------------
// This is the code for Part 8 
#include "Dhruv.h"
void setup() {
  // put your setup code here, to run once:
  initport();
}

void loop() {
    // put your main code here, to run repeatedly:
     volatile long i ;
     volatile char x ;
     x = 0xAA; //10101010
     output(x);
     for(i=0;i<100000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<100000;i++);
}
//----------------------------------------------------------------xxxxxxxxxxxxxxxxxxxxxxxxxxxx------------------------------------------------------------
// This is the code for Part 9 
#include "Dhruv.h"
void setup() {
  // put your setup code here, to run once:
  initport();
}

void loop() {
    // put your main code here, to run repeatedly:
     volatile long i ;
     volatile char x ;
     x = 0x55; //10101010
     output(x);
     for(i=0;i<100000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<100000;i++);
}
//----------------------------------------------------------------xxxxxxxxxxxxxxxxxxxxxxxxxxxx------------------------------------------------------------
// This is the Code for Part 10
#include "Dhruv.h"
void setup() {
  // put your setup code here, to run once:
  initport();
}

void loop() {
    // put your main code here, to run repeatedly:
     volatile long i ;
     volatile char x ;
     x = 0x9A; //
     output(x);
     for(i=0;i<100000;i++);
     x = 0x00;
     output(x);
     for(i=0;i<100000;i++);
}












