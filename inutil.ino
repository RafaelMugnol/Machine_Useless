#include "Servo.h"

Servo s;
const int chave = 12;
int aux;
boolean pos;
int i = 40;
int f = 142;

void setup(){
  s.attach(8);
  aux = 0;
  pinMode(13, OUTPUT);
  pinMode(chave,INPUT);
  if (digitalRead(chave) == HIGH){
    pos = false;
  }
  else{
    pos = true;  
  }
}

void loop(){
  if(pos == false){
    delay(10);
    if (digitalRead(chave) == HIGH){
       s.write(i);
    }
    else{
      delay(500);
      if(aux == 0)seq0();
      if(aux == 1)seq1();
      if(aux == 2)seq2();
      if(aux == 3)seq3();
      if(aux == 4)seq4();
      if(aux == 5)seq5();
      if(aux == 6)seq6();
      if(aux == 7)seq7();
      if(aux == 8)seq8();
      if(aux == 9)seq9();
      if(aux == 10)seq10();
      if(aux == 11)seq11();
      aux++;
      if(aux>11) aux=0;
    }
  }
  else{
   delay(10);
    if (digitalRead(chave) == HIGH){
     s.write(i);
    }
    else{ 
      s.write(f);
    }
  }
}


void seq0(){
  s.write(f);
  delay(300);
  
}
  
void seq1(){
  s.write(100);
  delay(1000);
  s.write(f);
  delay(300);
}

void seq2(){
  s.write(f);
  delay(2000);
}

void seq3(){
   s.write(84);
   delay(50);
   s.write(80);
   delay(50);
   s.write(84);
   delay(50);
   s.write(80);
   delay(50);
   s.write(84);
   delay(50);
   s.write(80);
   delay(50);
   s.write(84);
   delay(50);
   s.write(80);
   delay(50);
   s.write(80);
   delay(50);
   s.write(80);
   delay(50);
   s.write(84);
   delay(50);
   s.write(80);
   delay(50);
   s.write(84);
   delay(50);
   s.write(80);
   delay(50);
   s.write(84);
   delay(50);
   s.write(80);
   delay(50);
   s.write(84);
   delay(50);
   s.write(80);
   delay(50);
   s.write(84);
   delay(50);
   s.write(80);
   delay(50);
   s.write(84);
   delay(50);
   s.write(80);
   delay(50);
   s.write(84);
   delay(50);
   s.write(80);
   delay(50);
   s.write(84);
   delay(50);
   s.write(80);
   delay(50);
   s.write(84);
   delay(50);
   s.write(i);
   delay(1000);
   s.write(f);
   delay(300);
}

void seq4(){
  s.write(120);
  delay(1000);
  s.write(i);
  delay(2000);
  s.write(f);
  delay(300);
}

void seq5(){
  s.write(70);
  delay(50);
  s.write(60);
  delay(50);
  s.write(70);
  delay(50);
  s.write(60);
  delay(50);
  s.write(70);
  delay(50);
  s.write(60);
  delay(50);
  s.write(70);
  delay(50);
  s.write(60);
  delay(50);
  s.write(70);
  delay(50);
  s.write(60);
  delay(50);
  s.write(70);
  delay(50);
  s.write(60);
  delay(50);
  s.write(70);
  delay(50);
  s.write(60);
  delay(50);
  s.write(70);
  delay(50);
  s.write(60);
  delay(50);
  s.write(70);
  delay(50);
  s.write(60);
  delay(50);
  s.write(70);
  delay(50);
  s.write(60);
  delay(50);
  s.write(70);
  delay(50);
  s.write(60);
  delay(50);
  s.write(70);
  delay(50);
  s.write(60);
  delay(50);
  s.write(70);
  delay(50);
  s.write(75);
  delay(1000);
  s.write(f);
  delay(300);
}

void seq6(){
  int ley = 0;
  for (ley = i; ley < f; ley++){
    delay(20);
    s.write(ley);
  }
}

void seq7(){
  seq0();
}

void seq8(){
  s.write(70);
  delay(50);
  s.write(60);
  delay(50);
  s.write(70);
  delay(50);
  s.write(60);
  delay(50);
  s.write(70);
  delay(50);
  s.write(60);
  delay(50);
  s.write(70);
  delay(50);
  s.write(60);
  delay(50);
  s.write(70);
  delay(50);
  s.write(60);
  delay(50);
  s.write(70);
  delay(50);
  s.write(60);
  delay(50);
  s.write(70);
  delay(50);
  s.write(60);
  delay(50);
  s.write(70);
  delay(50);
  s.write(60);
  delay(50);
  s.write(70);
  delay(50);
  s.write(60);
  delay(50);
  s.write(70);
  delay(50);
  s.write(60);
  delay(50);
  s.write(70);
  delay(50);
  s.write(60);
  delay(50);
  s.write(70);
  delay(50);
  s.write(60);
  delay(50);
  s.write(70);
  delay(50);
  s.write(i);
  delay(1000);
  s.write(60);
  delay(50);
  s.write(70);
  delay(50);
  s.write(60);
  delay(50);
  s.write(70);
  delay(50);
  s.write(60);
  delay(50);
  s.write(70);
  delay(50);
  s.write(60);
  delay(50);
  s.write(70);
  delay(50);
  s.write(60);
  delay(50);
  s.write(70);
  delay(50);
  s.write(60);
  delay(50);
  s.write(70);
  delay(50);
  s.write(60);
  delay(50);
  s.write(70);
  delay(50);
  s.write(f);
  delay(300);
}

void seq9(){
  seq1();
}

void seq10(){
  s.write(120);
  delay(200);
  s.write(110);
  delay(400);
  s.write(110);
  delay(400);
  s.write(110);
  delay(400);
  s.write(50);
  delay(500);
  s.write(90);
  delay(100);
  s.write(85);
  delay(100);
  s.write(90);
  delay(100);
  s.write(85);
  delay(100);
  s.write(90);
  delay(100);
  s.write(85);
  delay(100);
  s.write(90);
  delay(100);
  s.write(85);
  delay(100);
  s.write(f);
  delay(300);
  
}

void seq11(){
  delay(5000);
  s.write(f);
  delay(300);
}
