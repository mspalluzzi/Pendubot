byte step_pin = 9;                  //control signal
int data;                    //serial stream coming from pi
unsigned long current_time;            //time since program has began
unsigned long previous_time = 0;      //holds time of last update

void setup(){
  Serial.begin(9600);
  Serial.setTimeout(5);        //timeout for Serial.parseInt() must be less than incoming frequency
  pinMode(step_pin, OUTPUT);
  digitalWrite(step_pin, LOW);
}

void loop(){
  current_time = millis();
  if (Serial.available()){
    data = Serial.parseInt();
    freq = map(sec, 1, 700, 1000, 1);
  }

            
  
  if (current_time - previous_time >= freq){
    Serial.println(sec);
    digitalWrite(step_pin, HIGH);
    digitalWrite(step_pin, LOW);
    previous_time = current_time;
  }
  else{}
}
