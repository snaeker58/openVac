const int irControlPin =  5;  
const int irReceiverPin = A0;
unsigned long ambientSignal, activeSignal; 
unsigned int proximity;
unsigned int normalizedProximity;
bool edgeTrip;

void setup()   {
  Serial.begin(9600);
  analogReference(EXTERNAL);
  pinMode(irControlPin, OUTPUT);
}

void loop(){
  edgeTrip = false;
  ambientSignal = 0;
  activeSignal = 0;
  
  for(int i=0; i<25; i++){
    ambientSignal += analogRead(irReceiverPin);
    delayMicroseconds(500);
  }
  ambientSignal /= 25;

  digitalWrite(irControlPin, HIGH);
  for(int i=0; i<25; i++){
    activeSignal += analogRead(irReceiverPin);
    delayMicroseconds(500);
  }
  activeSignal /= 50;
  
  proximity = ambientSignal - activeSignal;
  normalizedProximity = constrain(proximity, 600, 900);
  if (normalizedProximity == 600) {
    edgeTrip = true;
  }
  Serial.println(edgeTrip);

  digitalWrite(irControlPin,LOW);
}