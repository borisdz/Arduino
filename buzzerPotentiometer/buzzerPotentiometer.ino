int potVal;
int buzzPin = 8;
int potPin = A3;
int dt = 500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzPin, OUTPUT);
  pinMode(potPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
potVal=analogRead(potPin);
Serial.println(potVal);
delay(dt);
while(potVal>1000) {
    digitalWrite(buzzPin, HIGH);
    potVal=analogRead(potPin);
  }
digitalWrite(buzzPin,LOW);
}