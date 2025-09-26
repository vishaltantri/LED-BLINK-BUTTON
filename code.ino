void setup() {
  // put your setup code here, to run once:
  //yellow wires are to send 5v/0v when butoon is pressed
  pinMode(2, INPUT);//input to button
  pinMode(12, OUTPUT);//output of led
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(2)==HIGH){//when button is pressed
    digitalWrite(12, HIGH);
  }else{//button is not pressed
    digitalWrite(12, LOW);
  }

}
//note instructor said to use a large resistor to connect button to ground(yellow wire)