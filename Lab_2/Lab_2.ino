
int sensorPin = 0;    
                      
int ledPin = 7;     
int ledPin2 = 2; 

void setup() // 
{
  
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}


void loop() 
{
  int sensorValue;
  
  sensorValue = analogRead(sensorPin) * 100;    

  digitalWrite(ledPin, HIGH);     
  digitalWrite(ledPin2, LOW); 
  delay(sensorValue);           
                                  
  digitalWrite(ledPin, LOW);      
  digitalWrite(ledPin2, HIGH); 
  delay(sensorValue);             
                                  

}

