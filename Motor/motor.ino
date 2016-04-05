int pin1 = 9;
int pin2 = 10;
int pin3 = 12;
int pin4 = 13;
void setup()
{
   pinMode(pin1,OUTPUT);
   pinMode(pin2,OUTPUT);
   pinMode(pin3,OUTPUT);
   pinMode(pin4,OUTPUT);
}
void loop()
{
 digitalWrite(pin1,HIGH);
 digitalWrite(pin2,LOW);
 digitalWrite(pin3,HIGH);
 digitalWrite(pin4,LOW); 
}
