/*
 This is an example Arduino sketch for Pixel Pals learning kit
 
 Thank you to all our Kickstarter supporters who made Chip Possible!
 
 Pick up your own Pixel Pal in the Soldering Sunday shop:
 http://http://solderingsunday.com/product-category/pixel-pals/
 
 Soldering Sunday supports and invests time and resources in open source code,
 please suport us by purchasing from solderingsunday.com
 
 BSD licence. All text must be included in any redistribution. Thank you.
 
 Created 2015-06-08
 By: SolderingSunday.com
 Rev: 1.0
 https://github.com/SolderignSunday
*/

// Pixel Pals have 3 important pins
// Ground (GND) -- plugged into to Arduino GND
// Right Eye LED (D10) --> plugged into to Arduino D10
// Left Eye LED (D11) --> plugged into to Arduino D11


int potPin = 0;
int potValue = 0;
int led1 = 10;
int led2 = 11; 

void setup() {
   pinMode(led1, OUTPUT);
   pinMode(led2, OUTPUT);
} 

void loop() {
   potValue = analogRead(potPin);
   analogWrite(led1, potValue/4);
   analogWrite(led2, potValue/4);
   delay(10);
}
