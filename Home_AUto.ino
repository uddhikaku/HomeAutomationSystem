int FAN1 = 13;
int FAN2 = 12;
int FAN3 = 11;
int LED1 = 10;
int LED2 = 9;
int LED3 = 8;

void setup() 
{
  Serial.begin(9600);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(FAN1,OUTPUT);
  pinMode(FAN2,OUTPUT);
  pinMode(FAN3,OUTPUT);
}

char rx_byte = 0;
void loop() 
{
  if (Serial.available() > 0)
  {
    rx_byte = Serial.read();
    
    if (rx_byte == 'a') 
    {
      Serial.print("LED 01 is ON \n");
      digitalWrite(LED1,HIGH);
    }
    else if(rx_byte == 'b')
    {
      Serial.println("LED 01 is OFF ");
      digitalWrite(LED1,LOW);
    }
    else if(rx_byte == 'c')
    {
      Serial.println("LED 02 is ON ");
      digitalWrite(LED2,HIGH);
    }
    else if(rx_byte == 'd')
    {
      Serial.println("LED 02 is OFF ");
      digitalWrite(LED2,LOW);
    }
    else if(rx_byte == 'e')
    {
      Serial.println("LED 03 is ON ");
      digitalWrite(LED3,HIGH);
    }
    else if(rx_byte == 'f')
    {
      Serial.println("LED 03 is OFF ");
      digitalWrite(LED3,LOW);
    }
    else if(rx_byte == 'g')
    {
      Serial.println("FAN 01 is ON ");
      digitalWrite(FAN1,HIGH);
    }
    else if(rx_byte == 'h')
    {
      Serial.println("FAN 01 is OFF ");
      digitalWrite(FAN1,LOW);
    }
    else if(rx_byte == 'i')
    {
      Serial.println("FAN 02 is ON ");
      digitalWrite(FAN2,HIGH);
    }
    else if(rx_byte == 'j')
    {
      Serial.println("FAN 02 is OFF ");
      digitalWrite(FAN2,LOW);
    }
    else if(rx_byte == 'k')
    {
      Serial.println("FAN 03 is ON ");
      digitalWrite(FAN3,HIGH);
    }
    else if(rx_byte == 'l')
    {
      Serial.println("FAN 03 is ON ");
      digitalWrite(FAN3,LOW);
    }
    else
    {
      Serial.println("ALL OFF ");
    }
  }
}
