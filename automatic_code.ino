
void setup () {
  pinMode(2,OUTPUT);// left motor pin 1
  pinMode(3,OUTPUT);// left motor pin2
  pinMode(4,OUTPUT);// right motor pin 1 
  pinMode(5,OUTPUT);// right motor  pin 2
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  pinMode(10,INPUT);
}
void loop () { 
  int x=digitalRead(8);
  int y=digitalRead(9);
  int z=digitalRead(10);
  if ((x==1)&&(y==0)&&(z==1))
  forward();
  if ((x==1)&&(y==1)&&(z==0))
  left();
  if ((x==1)&&(y==0)&&(z==0))
  left();
  if ((x==0)&&(y==1)&&(z==1))
  right(); 
  if ((x==0)&&(y==0)&&(z==1))
  right();
  if ((x==1)&&(y==1)&&(z==1))
  forward();
  if ((x==0)&&(y==0)&&(z==0))
  Stop(); 
} 

void forward() {
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
} 

void left() 
{
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(7,HIGH); 
  digitalWrite(8,LOW); 
} 

 
void Stop() {
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
} 
void right() 
{
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(7,LOW); 
  digitalWrite(8,LOW); 
}




