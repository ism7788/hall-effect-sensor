int hall=A1;
int led=6;
void setup() {
  Serial.begin(9600);
pinMode(hall,INPUT);
pinMode(led,OUTPUT);
}

void loop() {
int state=analogRead(hall);
Serial.println(analogRead(hall));
delay (200);
if(state>300)
digitalWrite(led,0);
else
digitalWrite(led,1);
}
