int phototransistorPin = A0;
int ledPin = 3;
int buzzPin = 5;
int switchPin = 2;
int running = true;

int light = 500;

void setup() {
  // Set the pin modes
  pinMode(phototransistorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzPin, OUTPUT);
  pinMode(switchPin, INPUT_PULLUP);

  Serial.begin(9600);
}

void loop() {
  // Read the phototransistor value
  int switch2 = digitalRead(switchPin);
  int phototransistorPin2 = analogRead(phototransistorPin);
  if(!running){
    return;
  }
  Serial.println(switch2);
  Serial.println(phototransistorPin2);
  
  if(phototransistorPin2 > 50){
    Serial.print("Alarm activated");
    tone(buzzPin, 500);
    digitalWrite(ledPin, HIGH);
    
    if(switch2 == HIGH){
    Serial.print("Alarm deactivated");
    noTone(buzzPin);
    digitalWrite(ledPin, LOW);
    running = false;
    //return;
      
    
    }
  }
  

}