

/**
 * Photogate test code
 * 
 * Flash LED on plugged into pin 13 to hit when photogate
 * beam is broken [pin 2]. Tests connection and function of the photogate
 * before connection to the FV air lock. 
 *
 *@author thomaswilderspin@hotmail.com [@tomwilderspin]
 *@reference Orginal test code can be found:http://arduskipper.blogspot.co.uk/2011/03/finally-got-photo-interrupter-working.html
 */

int val;

void setup()

{

pinMode(13, OUTPUT);
pinMode(2, INPUT);

Serial.begin(9600); // sets the serial port to 9600

digitalWrite(13, LOW);
}

void loop()

{

val = digitalRead(2); // read digital input pin 2
//val = analogRead(0); // read analog input pin 0

Serial.print(val); // prints the value read
Serial.print(" "); // prints a space between the numbers

if(val==0){
  
  digitalWrite(13, HIGH);
  
}else{
  digitalWrite(13, LOW);
}

delay(100); // wait 10ms for next reading

}
