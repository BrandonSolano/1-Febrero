int rojo=13;
int azul=12;
int verde=11;
void setup() {
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);


}

void loop() {
digitalWrite(rojo,HIGH);
delay(100);
digitalWrite(rojo,LOW);
delay(400);
digitalWrite(azul,HIGH);
delay(100);
digitalWrite(azul,LOW);
delay(400);
digitalWrite(verde,HIGH);
delay(100);
digitalWrite(verde,LOW);
delay(400);

}
