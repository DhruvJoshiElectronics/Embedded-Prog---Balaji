// 1. Press 0th switch glow 8 LEDs
// 2. Press 2nd switch blink 8 LEDs
// 3. Press 3rd switch glow 0th LED, delay,1st LED, delay ...
// 4. Press any switch glow 7th LED, delay,6th LED, delay ...
// 5. Press 0th switch glow even LEDs
// 6. Press 7th switch glow odd LEDs
// 7. Press 0th switch 0th LED should glow
// Press 1st switch 1st LED should glow .....
// ...up to 7th switch
// 8. Press 0th switch 7th LED should glow ....
// Press 1st switch 6th LED should glow .....
// ...........up to 7th switch
// 9. Press any switch 0th LED ON, OFF
// 1st LED ON, OFF....
// 10. Press 1st switch At a time glow 0th
////-----------------------------------------xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx-------------------------------------------
// This code is for part 1 , 2 , 3 ,4 ,5,6,7
void setup() 
{
  volatile char *dirf , *dirk ;
  volatile char *outf , *ink ;
  dirf = 0x30 , outf = 0x31;
  *dirf = 0x01;
  dirk = 0x107;
  ink = 0x106 ;
  *dirk = 0x00; 
