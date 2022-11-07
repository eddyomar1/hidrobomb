int x = 0;
int bob = 12;
int ini = 11;

void setup() {

pinMode(bob,OUTPUT);
pinMode(ini,OUTPUT);

pinMode(6,INPUT_PULLUP);
pinMode(7,INPUT_PULLUP);


delay(1500);
digitalWrite(ini,0);

}

void loop() {

//if(!digitalRead(5)){  x = 0;  }
if(!digitalRead(6)){  x = 1;  } else if(!digitalRead(7)){  x = 2;  } else {x=0;}


if(x==1){
  digitalWrite(bob,1);
}

if(x==2){
  digitalWrite(bob,0);
}

if(!x){
  
  digitalWrite(bob,1);
  delay(5000);
  digitalWrite(bob,0);
  delay(10000);
  }



}
