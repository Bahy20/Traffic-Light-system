// C++ code
//
void setup()
{
  pinMode(8,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(12 ,OUTPUT);
}

void loop()
{
digitalWrite (8 , HIGH );
delay (5500);
digitalWrite (10 , 1);
delay(1000);
digitalWrite(10 , 0);
delay (1000);
digitalWrite (10 , 1);
delay(1000);
digitalWrite(10 , 0);
delay (1000);
digitalWrite (10 , 1);
delay(1000);
digitalWrite(10 , 0);
  

digitalWrite(8 ,LOW );
delay(2000);
  
digitalWrite(12,HIGH);
delay(2000);
  
digitalWrite(12,LOW);
delay(6500);  
}