#include <Servo.h>
#define dirPin 9
#define stepPin 8
Servo servo1; 
Servo servo2;  
Servo servo3;  
Servo servo4;  
Servo servo5;  
Servo servo6;   
Servo servo7; 
Servo servo8;
Servo servo9;
void servo_init_pos();void stprot(int dr,int co);void scan();void pos6();void pos5();void pos4();
void stirhome();void stairin();void pos3();void pos2();void pos1();void delaymin(int m);
void sr1();void sr2();void sr3();void sr4();void sr5();void sr6();void stphome();
void setup() { pinMode(10,INPUT_PULLUP); pinMode(11,INPUT_PULLUP);pinMode(12,INPUT_PULLUP);
  servo1.attach(2);
  servo2.attach(3); 
  servo3.attach(4); 
  servo4.attach(5); 
  servo5.attach(6);
  servo6.attach(7);
  servo7.attach(23);
  servo8.attach(27);
pinMode(stepPin, OUTPUT);
pinMode(dirPin, OUTPUT);
// Set the spinning direction CW/CCW:
stirhome(); delay(500);
}

void loop() {
 // put your main code here, to run repeatedly:

if(!digitalRead(10))
  {servo_init_pos(); stphome();
  stirhome(); delay(500);}
  
if(!digitalRead(12))
{
 pos6();delay(1000);sr6();delay(2000);stphome();stairin();delay(500);scan(); stirhome();
  delaymin(1);stairin();delay(500);scan(); stirhome();
 
 pos5();delay(1000);sr5();delay(2000);stphome();stairin();delay(500);scan(); stirhome();
 delaymin(1);stairin();delay(500);scan(); stirhome(); 
 
 pos4();delay(1000);sr4();delay(2000);stphome();stairin();delay(500);scan(); stirhome();
 delaymin(1);stairin();delay(500);scan(); stirhome(); 
 
 pos3();delay(1000);sr3();delay(2000);stphome();stairin();delay(500);scan(); stirhome();
delaymin(1);stairin();delay(500);scan(); stirhome();delaymin(1);stairin();delay(500);scan(); stirhome();

pos2();delay(2000);sr2();delay(2000);stphome();stairin();delay(500);scan(); stirhome();

delaymin(1);stairin();delay(500);scan(); stirhome();delaymin(1);stairin();delay(500);scan(); stirhome();

delaymin(5);stairin();delay(500);scan();stirhome();
delaymin(5);stairin();delay(500);scan();stirhome();
delaymin(5);stairin();delay(500);scan();stirhome();
delaymin(5);stairin();delay(500);scan();stirhome();
pos1();delay(2000);sr1();
delay(2000);stphome();stairin();delay(500);scan(); stirhome();
 stphome();
delaymin(5);stairin();delay(500);scan();stirhome();
 
 }

 



}
void servo_init_pos()
{
servo1.write(170);delay(200);
servo2.write(150);delay(200);
servo3.write(118);delay(200);
servo4.write(50);delay(200);
servo5.write(150);delay(200);
servo6.write(170);delay(200);
}
void sr1()
{
servo1.write(10);
}
void sr2()
{
servo2.write(15);
}
void sr3()
{
servo3.write(18);
}
void sr4()
{
servo4.write(5);
}
void sr5()
{
servo5.write(10);
}
void sr6()
{
servo6.write(10);
}

void stprot(int dr,int co)
{int i;
for(i=0;i<co;i++)
{
digitalWrite(dirPin, dr);
digitalWrite(stepPin, HIGH);
delayMicroseconds(500);
digitalWrite(stepPin, LOW);
delayMicroseconds(500);
} 
}

void scan()

{int i,j;
for(i=115;i>90;i=i-3)
{for(j=115;j>25;j=j-5)
 {servo8.write(j);delay(100);}
 servo7.write(i);delay(300);}

for(i=90;i<115;i=i+3)
{for(j=25;j<115;j=j+5)
{servo8.write(j);delay(100);}
servo7.write(i);delay(300);}
}

void stirhome()

{int i;
  servo7.write(105);delay(1000);
 servo8.write(170);
for(i=105;i>35;i=i-5)
{servo7.write(i);delay(300);}
 
}

void stairin()
{int i;
servo8.write(170);
for(i=35;i<105;i=i+5)
{servo7.write(i);delay(300);}

}
void pos6()
{int i;
while(digitalRead(11))
{stprot(1,50  );delay(90);}
delay(500);
for(i=0;i<7;i++)
 stprot(0,200); 
}

void pos5()
{int i;
while(digitalRead(11))
{stprot(1,50  );delay(90);}
delay(500);
for(i=0;i<10;i++)
 stprot(0,200); 
}


void pos4()
{int i;
while(digitalRead(11))
{stprot(1,50  );delay(90);}
delay(500);
for(i=0;i<12;i++)
 stprot(0,200); 
}

void pos3()
{int i;
while(digitalRead(11))
{stprot(1,50  );delay(90);}
delay(500);
for(i=0;i<15;i++)
 stprot(0,200); 
}


void pos2()
{int i;
while(digitalRead(11))
{stprot(1,50  );delay(90);}
delay(500);
for(i=0;i<18;i++)
 stprot(0,200); 
}
void pos1()
{int i;
while(digitalRead(11))
{stprot(1,50  );delay(90);}
delay(500);
for(i=0;i<21;i++)
 stprot(0,200); 
}

void stphome()
{while(digitalRead(11))
{stprot(1,50  );delay(90);}
}

void delaymin(int m)
{int i,j;
for(i=0;i<m;i++)
for(j=0;j<20;j++)
 delay(1000);
}
