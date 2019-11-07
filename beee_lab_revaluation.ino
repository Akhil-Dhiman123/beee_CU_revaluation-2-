int sensorPin1=A0;
int ledPin=13;
int sensorValue=0;
int sensorState=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);
  pinMode(2,INPUT);
}

void loop() {
sensorState=digitalRead(2);
sensorValue=analogRead(sensorPin1);
if((sensorState==HIGH)&&(sensorValue<300))
{
  digitalWrite(ledPin,HIGH); 
}
  else
    if((sensorState==HIGH)&&(sensorValue>1000))
  {
    digitalWrite(ledPin,LOW);
   delay(100);
  }
}
