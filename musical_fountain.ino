
void setup() 
{
pinMode(9,OUTPUT);   //for the leds
pinMode(13,OUTPUT);    //for piezo speaker
pinMode(2,OUTPUT);    //for pump
}

void loop() 
{
  for (int i = 0; i < 4; i++) 
  {

    digitalWrite(9,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(2,HIGH);
    delay(700);
    digitalWrite(13,LOW);
    digitalWrite(9,LOW);
    digitalWrite(2,LOW);
    delay(700);
    digitalWrite(9,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(2,HIGH);
    delay(100);
    digitalWrite(13,LOW);
    digitalWrite(9,LOW);
    digitalWrite(2,LOW);
    delay(70);
    
                    
  }
  
  for (int i = 0; i < 5; i++) 
  {

    
    digitalWrite(9,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(2,HIGH);
    delay(300);
    digitalWrite(13,LOW);
    digitalWrite(9,LOW);
    digitalWrite(2,LOW);
    delay(300);
    digitalWrite(9,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(2,HIGH);
    delay(80);
    digitalWrite(13,LOW);
    digitalWrite(9,LOW);
    digitalWrite(2,LOW);
    delay(40);
    digitalWrite(9,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(2,HIGH);
    delay(40);
    digitalWrite(13,LOW);
    digitalWrite(9,LOW);
    digitalWrite(2,LOW);
    delay(70);
    
    
                   
  }
for (int i = 0; i < 8; i++) 
  {

  
    digitalWrite(9,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(2,HIGH);
    delay(200);
    digitalWrite(13,LOW);
    digitalWrite(9,LOW);
    digitalWrite(2,LOW);
    delay(100);
    digitalWrite(9,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(2,HIGH);
    delay(50);
    digitalWrite(13,LOW);
    digitalWrite(9,LOW);
    digitalWrite(2,LOW);
    delay(100);
    digitalWrite(9,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(2,HIGH);
    delay(100);
    digitalWrite(13,LOW);
    digitalWrite(9,LOW);
    digitalWrite(2,LOW);
    delay(100);
    digitalWrite(9,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(2,HIGH);
    delay(200);
    digitalWrite(13,LOW);
    digitalWrite(9,LOW);
    digitalWrite(2,LOW);
    delay(50);
    digitalWrite(9,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(2,HIGH);
    delay(20);
    digitalWrite(13,LOW);
    digitalWrite(9,LOW);
    digitalWrite(2,LOW);
    delay(10);
    
  }
    

}

