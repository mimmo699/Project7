int switch1 = 4;
int motor1 = 9;
int pmeter = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(switch1, INPUT);
  pinMode(motor1, OUTPUT);
  pinMode(pmeter, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int switch2 = digitalRead(switch1);
  int pmeter2 = analogRead(pmeter);
  int speed = map(pmeter2, 0, 1023, 0, 255);
  Serial.println(switch2);
  Serial.println(pmeter2);

//uses the switch only to regulate the speed of the motor

  // if(switch2 == HIGH){
  //   digitalWrite(motor1, HIGH);
  // }
  // else{
  //   digitalWrite(motor1, LOW);
  // }

//intergrates both switch and the pontentiometer to regulate the speed of the  motor
   if(switch2 == 1){
    analogWrite(motor1, speed);
  }
  else{
    analogWrite(motor1, speed);
  }

}
