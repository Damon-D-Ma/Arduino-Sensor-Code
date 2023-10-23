const int flamePin = 2;     // the number of the flame pin
const int ledPin =  10;      // the number of the LED pin
// variables will change:
int State = 0;         // variable to read sensor
void setup() {
  pinMode(ledPin, OUTPUT);      
  pinMode(flamePin, INPUT);     
}

void loop(){
  // read the state of the value:
  State = digitalRead(flamePin);
  //my flame sensor is inverted for some reason and
  //reads high when there is no flame
  if (State == HIGH) {     
    // turn LED off:    
    digitalWrite(ledPin, LOW);  
  } 
  else {
    // turn LED on:
    digitalWrite(ledPin, HIGH); 
  }
}