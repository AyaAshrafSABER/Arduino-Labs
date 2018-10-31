
float operands[2]= {0.0,0.0};
float ans = 0.0;
void setup() {
  Serial.begin(9600);
}

void loop() {
      while(!Serial.available());
    operands[0] = Serial.parseFloat();
    Serial.println(operands[0]);
        M’while(!Serial.available());

    operands[1] = Serial.parseFloat();
    Serial.println(operands[1]);
    ans = operands[0] + operands[1];
    Serial.println(ans);

  
}
