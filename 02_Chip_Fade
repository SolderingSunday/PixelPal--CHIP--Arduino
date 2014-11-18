/*
 Pixel Pals: FADE Chip's Eyes
 
 This is an example Arduino sketch for Chip, a Pixel Pal learning kit
 
 Thank you to all our Kickstarter supporters who made Chip Possible
 
 Pick up your own Chip in the Soldering Sunday shop:
 http://http://solderingsunday.com/product-category/pixel-pals/
 
 Soldering Sunday suports and invests time and resources in open source code,
 please suport us by purchasing from solderingsunday.com
 
 BSD licence. All text must be included in any redistribution. Thank you.
 
 Created 2014-11-18
 By: SolderingSunday.com
 Rev: 1.0
 
 Goal: LEDs do not dim the same way incadescent light bulbs dim, but we can makere them act very similiar
 We will use the PWM function on the LED pins to change the brightness of Chip's eyes.
*/

// Chip has 3 important pins
// Ground (GND) -- plugged into to Arduino GND
// Right Eye LED (D12) --> plugged into to Arduino D12
// Left Eye LED (D11) --> plugged into to Arduino D11
//
// We need to define Chip's eyes so we can use them in our code

int rEye = 11; //define right eye as pin12 on the Arduino
int lEye = 10; //define right eye as pin11 on the Arduino

int brightness = 0;    // how bright the Chip's Eye's will be
int fadeAmount = 5;    // how many points to fade his eyes by

// Next we need to initialize the Arduino pins
// setup() only runs once when you power or reset an Arduino

void setup(){
  
pinMode(rEye, OUTPUT); //set right eye for output
pinMode(lEye, OUTPUT); //set left eye for output

}

//loop runs forever - this is our main code
void loop(){
  
   // set the brightness of Chip's Eyes:
  analogWrite(rEye, brightness);    
  analogWrite(lEye, brightness);  
   
   // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;
   
  // reverse the direction of the fading at the ends of the fade: 
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount ; 
  }     
  
 delay (30);     //wait for 30 millisecons second. Delay is set 1/1000 of a second
  
  
  
}
