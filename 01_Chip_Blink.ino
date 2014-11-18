/*
 This is an example Arduino sketch for Chip, a Pixel Pal learning kit
 
 Thank you to all our Kickstarter supporters who made Chip Possible!
 
 Pick up your own Chip in the Soldering Sunday shop:
 http://http://solderingsunday.com/product-category/pixel-pals/
 
 Soldering Sunday suports and invests time and resources in open source code,
 please suport us by purchasing from solderingsunday.com
 
 BSD licence. All text must be included in any redistribution. Thank you.
 
 Created 2014-11-18
 By: SolderingSunday.com
 Rev: 1.0
 
*/

// Chip has 3 important pins
// Ground (GND) -- plugged into to Arduino GND
// Right Eye LED (D10) --> plugged into to Arduino D10
// Left Eye LED (D11) --> plugged into to Arduino D11
//
// We need to define Chip's eyes so we can use them in our code

int rEye = 10; //define right eye as pin12 on the Arduino
int lEye = 11; //define right eye as pin11 on the Arduino

// Next we need to initialize the Arduino pins
// setup() only runs once when you power or reset an Arduino

void setup(){
pinMode(rEye, OUTPUT); //set right eye for output
pinMode(lEye, OUTPUT); //set left eye for output
}

//loop runs forever - this is our main code
void loop(){
  // turn eyes on. HIGH means set voltage to HIGH
  digitalWrite(rEye, HIGH);     
  digitalWrite(lEye, HIGH);    
  
  delay (1000);     //wait for 1 second. Delay is set in miliseconds or 1/1000 of a second
  
  // turn right eye off. LOW means set voltage to LOW.
  digitalWrite(rEye, LOW);     
  digitalWrite(lEye, LOW);     
  
  delay (1000);     //wait for 1 second. Delay is set in miliseconds or 1/1000 of a second
  
}
