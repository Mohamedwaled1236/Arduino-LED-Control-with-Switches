int red=13;
int yellow=12;
int green=11;
int orange=10;
int white=9;
int blue=8;
int reading=0;


void setup()
{ 
  pinMode(13,OUTPUT); 
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(6,INPUT);
  pinMode(7,INPUT);
}

void loop()
{
 if (digitalRead(5)==HIGH){
    analogWrite(13,1);
    digitalWrite(12,255);     
    digitalWrite(13,255); 
 }
  
    else{
      analogWrite(13,0);
     digitalWrite(12,0);
      
    }
    
    if(digitalRead(6)==HIGH){
      digitalWrite(11,1);
      analogWrite(10,255);
    }
    
    else{
      digitalWrite(11,0);
      analogWrite(10,0);
      
      
        if(digitalRead(5)==HIGH){
      digitalWrite(9,1);
      analogWrite(8,255);
    } 
      
        else{
      digitalWrite(9,0);
      analogWrite(8,0);
      
    }
}
}
  


   
