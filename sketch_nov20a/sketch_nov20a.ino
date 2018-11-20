float toVol = 5.0/1023;
int led = 13;
int buzzer = 8; //put the buzzer
int voltagePin = A1; // Put the analog pin
int voltageRead=0;
int lowThreshold = 2.5;
int highThreshold = 3;

void setup() {
 Serial.begin(9600);
 pinMode(led, OUTPUT);
 pinMode(buzzer, OUTPUT);
 pinMode(voltagePin, INPUT);

}

void loop() {
  voltageRead = analogRead(voltagePin);
  float voltage = voltageRead * toVol;
  Serial.print("Current Analog Voltage is ");
  Serial.print(voltage, 3);
  Serial.println();
  if(voltage > highThreshold){
    tone(buzzer, 500);
    digitalWrite(led, HIGH);   
  } else if(voltage < lowThreshold) {
    noTone(buzzer);
    digitalWrite(led, LOW);
  } else {
    noTone(buzzer);
    digitalWrite(led, LOW);
  }

}
