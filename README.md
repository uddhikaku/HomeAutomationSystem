# Home Automation System using Arduino

The main objective of this project is to develop a home automation system using an Arduino board with Bluetooth being remotely controlled by any Android OS smartphone. As technology is advancing so houses are also getting smarter. Modern houses are gradually shifting from conventional switches to centralized control system, involving remote controlled switches. Presently, conventional wall switches located in different parts of the house makes it difficult for the user to go near them to operate. Even more it becomes more difficult for the elderly or physically handicapped people to do so. Remote controlled home automation system provides a most modern solution with smartphones.

Circuit Diagram Demonstration of the project is in the below
You can open "HomeAutomation.pdsprj" using Proteus Software

<img src="https://github.com/uddhikaku/HomeAutomationSystem/blob/main/Circuit%20Diagram.jpg?raw=true" width="50%" />
<img src="https://github.com/uddhikaku/HomeAutomationSystem/blob/main/Circuit%20Diagram%202%20.jpg?raw=true" width="50%" />

https://youtu.be/iCiXsfW_q14
<a href = "[https://www.youtube.com/watch?v=1ieyT6df8ec](https://youtu.be/iCiXsfW_q14)" ></a>


### Arduino Code 

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




Copyright (c) 2020 Uddhika Kumarasinghe
