#include "String.h"
int led = 13;
int buzzer = 11;
int TIMEUNIT = 150M;
int shortGap = 3 * TIMEUNIT;
int interElementGap = TIMEUNIT;
int mediumGap = 7 * TIMEUNIT;
int dotFlash = TIMEUNIT;
int dashFlash = 3 * TIMEUNIT;

String message = "Morse Code";

void setup() {
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()) {
    message= Serial.readString();
    Serial.println(message);
    handleSignals(message);
    delay(mediumGap);
  }

}

void flash(int duration){
   digitalWrite(led,HIGH);
   digitalWrite(buzzer,HIGH);
  delay(duration);
  digitalWrite(led,LOW);
  digitalWrite(buzzer,LOW);
}

void handleSignals(String input) {
  int counter = 0;
  while (input.charAt(counter) !=  '\0') {
    char tmp = input.charAt(counter);
    tmp = toUpperCase(tmp);  

    
   switch (tmp){
     case 'A' : 
       flash(dotFlash);
      delay(interElementGap); 
      flash(dashFlash);     
      delay(shortGap);
     break;
     case 'B': 
      flash(dashFlash);
      delay(interElementGap); 
      flash(dotFlash);  
       delay(interElementGap);
      flash(dotFlash); 
       delay(interElementGap); 
      flash(dotFlash);  
      delay(shortGap);
     break;
     case 'C': //-.-.
     flash(dashFlash);
      delay(interElementGap); 
      flash(dotFlash);  
       delay(interElementGap);
      flash(dashFlash); 
       delay(interElementGap); 
      flash(dotFlash); 
      delay(shortGap);

     break; 
     case 'D':// -..
     flash(dashFlash);
      delay(interElementGap); 
      flash(dotFlash);  
       delay(interElementGap);
      flash(dotFlash); 
      delay(shortGap);
     break;
     case 'E': //.
      flash(dotFlash);  
      delay(shortGap);

     break;
     case 'F': //..-.
      flash(dotFlash);
      delay(interElementGap); 
      flash(dotFlash);  
       delay(interElementGap);
      flash(dashFlash); 
       delay(interElementGap); 
      flash(dotFlash); 
      delay(shortGap);
     break; 
     case 'G': //--.
     flash(dashFlash);
      delay(interElementGap); 
      flash(dashFlash);  
       delay(interElementGap);
      flash(dotFlash); 
      delay(shortGap);
     break;
     case 'H': //....
     flash(dotFlash);
      delay(interElementGap); 
      flash(dotFlash);  
       delay(interElementGap);
      flash(dotFlash); 
       delay(interElementGap); 
      flash(dotFlash); 
      delay(shortGap);
     break; 
     case 'I': //..
      flash(dotFlash);  
       delay(interElementGap);
      flash(dotFlash); 
      delay(shortGap);
     break;
     case 'J': //.---
     flash(dotFlash);
      delay(interElementGap); 
      flash(dashFlash);  
       delay(interElementGap);
      flash(dashFlash); 
       delay(interElementGap); 
      flash(dashFlash); 
      delay(shortGap);
     break;
     case 'K': //-.-
     flash(dashFlash);
      delay(interElementGap); 
      flash(dotFlash);  
       delay(interElementGap);
      flash(dashFlash); 
      delay(shortGap);
     break;
     case 'L': //.-..
     flash(dotFlash);
      delay(interElementGap); 
      flash(dashFlash);  
       delay(interElementGap);
      flash(dotFlash); 
       delay(interElementGap); 
      flash(dotFlash); 
      delay(shortGap);
     
     break;
     case 'M': //--
     flash(dashFlash);
      delay(interElementGap);
      flash(dashFlash);  
      delay(shortGap);

      
     break;
     case 'N': //-.
     flash(dashFlash);
      delay(interElementGap); 
      flash(dotFlash);  
      delay(shortGap);
     break; 
     case 'O': //----
     flash(dashFlash);
      delay(interElementGap); 
      flash(dashFlash);  
      delay(interElementGap);
      flash(dashFlash); 
      delay(shortGap);



      
     break;
     case 'P': //.--.
     flash(dotFlash);
      delay(interElementGap);
      flash(dashFlash);  
       delay(interElementGap);
      flash(dashFlash); 
       delay(interElementGap); 
      flash(dotFlash); 
      delay(shortGap);
     break;
     case 'Q': //--.-
     flash(dashFlash);
      delay(interElementGap); 
      flash(dashFlash);  
       delay(interElementGap);
      flash(dotFlash); 
       delay(interElementGap); 
      flash(dashFlash); 
      delay(shortGap);
     break;
     case 'R': //.-.
      flash(dotFlash);
      delay(interElementGap); 
      flash(dashFlash);  
       delay(interElementGap);
      flash(dotFlash); 
      delay(shortGap);

     break;
     case 'S': //... 
      flash(dotFlash);
      delay(interElementGap); 
      flash(dotFlash);       
      delay(interElementGap);
      flash(dotFlash); 
      delay(shortGap);
     break;
     case 'T': //-
      flash(dashFlash);  
      delay(shortGap);
     break;
     case 'U': //..-
      flash(dotFlash);
      delay(interElementGap); 
      flash(dotFlash);       
      delay(interElementGap);
      flash(dashFlash);  
      delay(shortGap);
     break;
     case 'V': //...-
      flash(dotFlash);
      delay(interElementGap); 
      flash(dotFlash);
      delay(interElementGap); 
      flash(dotFlash);       
      delay(interElementGap);
      flash(dashFlash);  
      delay(shortGap);
     break;
     case 'W': //.-- 
      flash(dotFlash);       
      delay(interElementGap);
      flash(dashFlash); 
      delay(interElementGap); 
      flash(dashFlash);  
      delay(shortGap);
     break;
     case 'X': //-..-
       flash(dashFlash);
       delay(interElementGap);  
       flash(dotFlash);       
       delay(interElementGap);
       flash(dotFlash);       
       delay(interElementGap);
       flash(dashFlash); 
       delay(shortGap);

     break;
     case 'Y': //-.--
       flash(dashFlash);
       delay(interElementGap);  
       flash(dotFlash);       
       delay(interElementGap);
       flash(dashFlash);
       delay(interElementGap);
       flash(dashFlash); 
       delay(shortGap);
     break;
     case 'Z': //--..
        flash(dashFlash);
       delay(interElementGap); 
        flash(dashFlash);
       delay(interElementGap); 
       flash(dotFlash);       
       delay(interElementGap);
       flash(dotFlash);  
        delay(shortGap);     
     break;
     case '0': //-----
       flash(dashFlash);
       delay(interElementGap); 
        flash(dashFlash);
       delay(interElementGap); 
       flash(dashFlash);
       delay(interElementGap); 
        flash(dashFlash);
       delay(interElementGap); 
       flash(dashFlash); 
       delay(shortGap);
     break;
     case '1': //.----
       flash(dotFlash);  
      delay(interElementGap); 
        flash(dashFlash);
       delay(interElementGap); 
       flash(dashFlash);
       delay(interElementGap); 
        flash(dashFlash);
       delay(interElementGap); 
       flash(dashFlash); 
       delay(shortGap);
     break;
     case '2': //..---
      flash(dotFlash);  
      delay(interElementGap); 
      flash(dotFlash);  
      delay(interElementGap); 
       flash(dashFlash);
       delay(interElementGap); 
        flash(dashFlash);
       delay(interElementGap); 
       flash(dashFlash); 
       delay(shortGap);
     break;
     case '3': //...--
      flash(dotFlash);  
      delay(interElementGap); 
       flash(dotFlash);  
      delay(interElementGap); 
       flash(dotFlash);  
      delay(interElementGap);
      flash(dashFlash);
       delay(interElementGap); 
       flash(dashFlash); 
       delay(shortGap); 
     break;
     case '4': //....-
      flash(dotFlash);  
      delay(interElementGap); 
       flash(dotFlash);  
      delay(interElementGap); 
       flash(dotFlash);  
      delay(interElementGap); 
       flash(dotFlash);  
      delay(interElementGap); 
       flash(dashFlash); 
       delay(shortGap);
     break;
     case '5': //.....
      flash(dotFlash);  
      delay(interElementGap); 
       flash(dotFlash);  
      delay(interElementGap); 
       flash(dotFlash);  
      delay(interElementGap); 
       flash(dotFlash);  
      delay(interElementGap); 
       flash(dotFlash);  
       delay(shortGap);
     break;
     case '6': //-....
        flash(dashFlash); 
        delay(interElementGap); 
       flash(dotFlash);  
      delay(interElementGap); 
       flash(dotFlash);  
      delay(interElementGap); 
       flash(dotFlash);  
      delay(interElementGap); 
       flash(dotFlash);  
       delay(shortGap);
     break;
     case '7': //--...
        flash(dashFlash); 
        delay(interElementGap); 
        flash(dashFlash); 
        delay(interElementGap); 
        flash(dotFlash);  
        delay(interElementGap);
        flash(dotFlash);  
        delay(interElementGap); 
        flash(dotFlash);  
        delay(shortGap);
     break;
     case '8': //---..
        flash(dashFlash); 
        delay(interElementGap); 
        flash(dashFlash); 
        delay(interElementGap); 
        flash(dashFlash); 
        delay(interElementGap);
        flash(dotFlash);  
        delay(interElementGap); 
        flash(dotFlash);  
        delay(shortGap); 
     break;
     case '9': //----.
        flash(dashFlash); 
        delay(interElementGap); 
        flash(dashFlash); 
        delay(interElementGap);
         flash(dashFlash); 
        delay(interElementGap);  
        flash(dashFlash); 
        delay(interElementGap);
        flash(dotFlash);  
        delay(shortGap);  
     break;
     default: delay(mediumGap);

   }
   counter++;
   
  }
}
