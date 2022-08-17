int Line1[]={13,12,11};
int Line2[]={10,9,8};
int Line3[]={7,6,5};
int Line4[]={4,3,2};

void setup()
{
  for(int i=0;i<3;i++)
  {
    pinMode(Line1[i],OUTPUT);
    pinMode(Line2[i],OUTPUT);
    pinMode(Line3[i],OUTPUT);
    pinMode(Line4[i],OUTPUT);
    
  }
  
  for(int i=0; i<3; i++)
  {
    digitalWrite(Line1[i],LOW);
    digitalWrite(Line2[i],LOW);
    digitalWrite(Line3[i],LOW);
    digitalWrite(Line4[i],LOW);
  }
}
  void loop()
  {
    // SOLUTION SET FOR QUADWAY SIGNAL
    digitalWrite(Line1[0], HIGH);
    digitalWrite(Line2[0], HIGH);
    digitalWrite(Line3[0], HIGH);
    digitalWrite(Line4[0], HIGH);
    delay(3000); //Milliseconds delay
    digitalWrite(Line1[0],HIGH);
    delay(1000);
    digitalWrite(Line1[1], HIGH);
    delay(2000);
    digitalWrite(Line1[0], LOW);
    digitalWrite(Line1[1], LOW);
    digitalWrite(Line1[2], HIGH);
    delay(30000);
    digitalWrite(Line1[1], HIGH);
    digitalWrite(Line1[2], LOW);
    digitalWrite(Line2[1], HIGH);
    digitalWrite(Line2[0], HIGH);
    delay(1000);
    digitalWrite(Line1[0],HIGH);
    digitalWrite(Line1[1],LOW);
    digitalWrite(Line1[2],LOW);
    digitalWrite(Line2[2], HIGH);
    digitalWrite(Line2[0], LOW);
    digitalWrite(Line2[1], LOW);
    delay(30000);
    digitalWrite(Line2[1],HIGH);
    digitalWrite(Line2[2],LOW);
    delay(5000);
    digitalWrite(Line2[1],LOW);
    digitalWrite(Line2[0],HIGH);
    delay(1500);
    digitalWrite(Line3[0],HIGH);
    delay(1200);
    digitalWrite(Line3[1],HIGH);
    delay(2000);
    digitalWrite(Line3[2],HIGH);
    digitalWrite(Line3[1],LOW);
    digitalWrite(Line3[0],LOW);
    delay(30000);
    digitalWrite(Line3[2],LOW);
    digitalWrite(Line3[1],HIGH);
    digitalWrite(Line4[0],HIGH);
    delay(1500);
    digitalWrite(Line4[1],HIGH);
    delay(5000);
    digitalWrite(Line3[0],HIGH);
    digitalWrite(Line3[1],LOW);
    delay(2000);
    digitalWrite(Line4[2],HIGH);
    digitalWrite(Line4[1],LOW);
    digitalWrite(Line4[0],LOW);
    delay(30000);
    digitalWrite(Line4[2],LOW);
    digitalWrite(Line4[1],HIGH);
    delay(5000);
    digitalWrite(Line4[0],HIGH);
    digitalWrite(Line4[1],LOW);
    digitalWrite(Line1[1],HIGH);
   
  }
    
    
  
  
    
  
  