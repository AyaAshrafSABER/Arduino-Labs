int ledRed = 8;
int ledGreen = 9;
int button = 10;
boolean ledState;
int startTime = 0;
int debounceDelay = 10;
int endTime;
void setup() {
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(button, INPUT);
  digitalWrite(ledGreen, HIGH);
  Serial.begin(9600);
  ledState = true;
  startTime = millis();

}

void loop() {
  delay(150);
  int endTime = millis();
  if(debounce(button)) {
    reverseState();
  }
  if(endTime - startTime >= 2000) {
    reverseState();
  }
  // put your main code here, to run repeatedly:

}
boolean debounce(int button){
  boolean state;
  boolean prevState;
  prevState = digitalRead(button);
  for(int counter = 0; counter < debounceDelay ; counter ++) {
    Serial.println(state);
    delay(1);
    state = digitalRead(button);
    if(state != prevState) {
      counter = 0;
      prevState = state;
    }
  }
  
  return state;
}

void reverseState() {
  Serial.println("reverse");
  digitalWrite(ledGreen, !ledState);
  digitalWrite(ledRed, ledState);
  ledState = !ledState;
  startTime = millis();
}
