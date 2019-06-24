void setup() 
{
  for (int i=2;i<=9;i++)
  {              
    pinMode(i,OUTPUT);
  }     
}

void loop()
{
  for(int s=1;s<=10;s++)
  {
    for (int i=2;i<=9;i++)
    {
      digitalWrite(i, HIGH);
      delay(17);
      digitalWrite(i, LOW);
      delay(12);
      }
   }
   for (int i=2;i<=9;i++)
   { 
    digitalWrite(i, HIGH);
   }
   delay(1500);
   for( int  h=1000;h>0;h=h-h/2-1)
   {
    for (int w=2;w<=9;w++)
    {
      digitalWrite(w, HIGH);
      }
     delay(h+50);
     for (int w=2;w<=9;w++)
     {
      digitalWrite(w, LOW);
      }
      delay(h+50);
   }
}
