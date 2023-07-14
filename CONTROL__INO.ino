char inputChar;

#include<Servo.h>

Servo  servo ;
Servo  servo2 ;
Servo  servo3 ;
Servo  servo4 ;
Servo  servo5 ;
Servo  servo6 ;

int SERVOpin =6;
int SERVOpin2 =9;
int SERVOpin3 =5;
int SERVOpin4 = 10;
int SERVOpin5 = A5;
int SERVOpin6 = A4;




void setup() {
 Serial.begin(115200);
 Serial.setTimeout(2);
 servo.attach(SERVOpin);
 servo2.attach(SERVOpin2);
 servo3.attach(SERVOpin3);
 servo4.attach(SERVOpin4);
 servo5.attach(SERVOpin5);
 servo6.attach(SERVOpin6);
   servo.writeMicroseconds(1500);
   servo2.writeMicroseconds(1500);
   servo3.writeMicroseconds(1500);
   servo4.writeMicroseconds(1500);
   servo5.writeMicroseconds(1500);
   servo6.writeMicroseconds(1500);
   
  delay(7000);
  
}
void loop() {
 if (Serial.available()) 
 { 
 inputChar = Serial.read(); 
 //Serial.print(inputchar);
      if(inputChar=='a'){ servo.writeMicroseconds(1500);
      servo2.writeMicroseconds(1500);
      servo3.writeMicroseconds(1500);
      servo4.writeMicroseconds(1500);
      servo5.writeMicroseconds(1500);
      servo6.writeMicroseconds(1500);
      }

//*********************************************************************************************************************************************** 
       
 else if(inputChar=='s'){ servo.writeMicroseconds(1550);
 servo2.writeMicroseconds(1550);
 servo3.writeMicroseconds(1550);
 servo4.writeMicroseconds(1550);}
 else if(inputChar=='d'){ servo.writeMicroseconds(1600);
 servo2.writeMicroseconds(1600);
 servo3.writeMicroseconds(1600);
 servo4.writeMicroseconds(1600);} 
 else if(inputChar=='f'){ servo.writeMicroseconds(1650);
 servo2.writeMicroseconds(1650);
 servo3.writeMicroseconds(1650);
 servo4.writeMicroseconds(1650);}
 else if(inputChar=='g'){ servo.writeMicroseconds(1700);
 servo2.writeMicroseconds(1700);
 servo3.writeMicroseconds(1700);
 servo4.writeMicroseconds(1700);} 
 else if(inputChar=='h'){ servo.writeMicroseconds(1750);
 servo2.writeMicroseconds(1750);
 servo3.writeMicroseconds(1750);
 servo4.writeMicroseconds(1750);} 
 else if(inputChar=='j'){ servo.writeMicroseconds(1800);
 servo2.writeMicroseconds(1800);
 servo3.writeMicroseconds(1800);
 servo4.writeMicroseconds(1800);}
 else if(inputChar=='k'){ servo.writeMicroseconds(1850);
 servo2.writeMicroseconds(1850);
 servo3.writeMicroseconds(1850);
 servo4.writeMicroseconds(1850);}  
 else if(inputChar=='l'){ servo.writeMicroseconds(1900);
 servo2.writeMicroseconds(1900);
 servo3.writeMicroseconds(1900);
 servo4.writeMicroseconds(1900);} 


  
else if(inputChar=='z'){ servo.writeMicroseconds(1450);
 servo2.writeMicroseconds(1450);
 servo3.writeMicroseconds(1450);
 servo4.writeMicroseconds(1450);}
 else if(inputChar=='x'){ servo.writeMicroseconds(1400);
 servo2.writeMicroseconds(1400);
 servo3.writeMicroseconds(1400);
 servo4.writeMicroseconds(1400);} 
 else if(inputChar=='c'){ servo.writeMicroseconds(1350);
 servo2.writeMicroseconds(1350);
 servo3.writeMicroseconds(1350);
 servo4.writeMicroseconds(1350);}
 else if(inputChar=='v'){ servo.writeMicroseconds(1300);
 servo2.writeMicroseconds(1300);
 servo3.writeMicroseconds(1300);
 servo4.writeMicroseconds(1300);} 
 else if(inputChar=='b'){ servo.writeMicroseconds(1250);
 servo2.writeMicroseconds(1250);
 servo3.writeMicroseconds(1250);
 servo4.writeMicroseconds(1250);} 
 else if(inputChar=='n'){ servo.writeMicroseconds(1200);
 servo2.writeMicroseconds(1200);
 servo3.writeMicroseconds(1200);
 servo4.writeMicroseconds(1200);}
 else if(inputChar=='m'){ servo.writeMicroseconds(1150);
 servo2.writeMicroseconds(1150);
 servo3.writeMicroseconds(1150);
 servo4.writeMicroseconds(1150);}  
 else if(inputChar=='y'){ servo.writeMicroseconds(1100);
 servo2.writeMicroseconds(1100);
 servo3.writeMicroseconds(1100);
 servo4.writeMicroseconds(1100);} 

//**********************************************************************************************************************************

  else if(inputChar=='A'){ servo5.writeMicroseconds(1550);
 servo6.writeMicroseconds(1550);
  }
 else if(inputChar=='S'){ servo5.writeMicroseconds(1600);
 servo6.writeMicroseconds(1600);
  } 
 else if(inputChar=='D'){ servo5.writeMicroseconds(1650);
 servo6.writeMicroseconds(1650);
  }
 else if(inputChar=='F'){ servo5.writeMicroseconds(1700);
 servo6.writeMicroseconds(1700);
  } 
 else if(inputChar=='G'){ servo5.writeMicroseconds(1750);
 servo6.writeMicroseconds(1750);
  } 
 else if(inputChar=='H'){ servo5.writeMicroseconds(1800);
 servo6.writeMicroseconds(1800);
  }
 else if(inputChar=='J'){ servo5.writeMicroseconds(1850);
 servo6.writeMicroseconds(1850);
  }  
 else if(inputChar=='K'){ servo5.writeMicroseconds(1900);
 servo6.writeMicroseconds(1900);
  } 


  
 else if(inputChar=='Z'){ servo5.writeMicroseconds(1450);
 servo6.writeMicroseconds(1450);
  }
 else if(inputChar=='X'){ servo5.writeMicroseconds(1400);
 servo6.writeMicroseconds(1400);
  } 
 else if(inputChar=='C'){ servo5.writeMicroseconds(1350);
 servo6.writeMicroseconds(1350);
  }
 else if(inputChar=='V'){ servo5.writeMicroseconds(1300);
 servo6.writeMicroseconds(1300);
  } 
 else if(inputChar=='Q'){ servo5.writeMicroseconds(1250);
 servo6.writeMicroseconds(1250);
  } 
 else if(inputChar=='B'){ servo5.writeMicroseconds(1200);
 servo6.writeMicroseconds(1200);
  }
 else if(inputChar=='N'){ servo5.writeMicroseconds(1150);
 servo6.writeMicroseconds(1150);
  }  
 else if(inputChar=='M'){ servo5.writeMicroseconds(1100);
 servo6.writeMicroseconds(1100);
  } 
//******************************************************************************************************************************
else if(inputChar=='1'){ servo.writeMicroseconds(1750);
 servo2.writeMicroseconds(1250);
 }

 else if(inputChar=='2'){ servo3.writeMicroseconds(1750);
 servo4.writeMicroseconds(1250);
 }

   
 }}
