 

///Prateek
///wwww.prateeks.in
///https://www.youtube.com/c/JustDoElectronics/videos
  
int ir1 = 2;
int ir2 = 3;
int ir3 = 4;
int ir4 = 5;
int ir5 = 6;

int led1 = 8;
int led2 = 9;
int led3 = 10;
int led4 = 11;
int led5 = 12;


int proxy1 = 0;
int proxy2 = 0;
int proxy3 = 0;
int proxy4 = 0;
int proxy5 = 0;

void setup()
{
  pinMode(ir1, INPUT);
  pinMode(ir2, INPUT);
  pinMode(ir3, INPUT);
  pinMode(ir4, INPUT);
  pinMode(ir5, INPUT);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);

}


void loop() {
  
  proxy1 = digitalRead(ir1);
  proxy2 = digitalRead(ir2);
  proxy3 = digitalRead(ir3);
  proxy4 = digitalRead(ir4);
  proxy5 = digitalRead(ir5);

  if (proxy1 == LOW)
  {
    digitalWrite(led1, HIGH);
    //digitalWrite(led2, HIGH); 
  }
  else
  {
    digitalWrite(led1, LOW);
    //digitalWrite(led2, LOW); 
  }

  if (proxy2 == LOW)
  {
    digitalWrite(led2, HIGH);
    //digitalWrite(led3, HIGH);
  }
  else
  {
    digitalWrite(led2, LOW);
    //digitalWrite(led3, LOW);
  }

  if (proxy3 == LOW)
  {
    digitalWrite(led3, HIGH);
    //digitalWrite(led4, HIGH);
  }
  else
  {
    digitalWrite(led3, LOW);
    //digitalWrite(led4, LOW);
  }

  if (proxy4 == LOW)
  {
    digitalWrite(led4, HIGH);
    //digitalWrite(led5, HIGH);
    
  }
  else
  {
    digitalWrite(led4, LOW);
    //digitalWrite(led5, LOW);
  }
  
   if (proxy5 == LOW)
  {
    digitalWrite(led5, HIGH);
    
  }
  else
  {
    digitalWrite(led5, LOW);
   
  }
}
