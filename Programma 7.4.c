#include <stdio.h>
#include <wiringPi.h>
#include <stdbool.h>

#define cls printf("\033[H\033[2J")

void pinout();
void menu();
void ledoff();
void status();

bool 11, 12, 13, 14, 15;

int main() {
      
      wiringPiSetup();
      pinout();
      ledoff();
      status();
      
      int led;
      
      while(1)
      {
      cls;
      menu();
      scanf("%d",&led);
      
      if(led==0) ledoff(); status();
      
      if(led==9)
        {
        ledoff();
        break;
        }
      if((led==1) && (11==0))
        {
        digitalWrite(1, HIGH);
        11 = 1;
        }
      else if ((led==1) && (11 ==1))
        {
        digitalWrite(1, LOW);
        11 = 0;
        }
      if((led==2) && (12 == 0)
        {
        digitalWrite(4, HIGH);
        12 = 1;
        }
      else if((led==2) && (12 == 1))
        {
        digitalWrite(4, LOW);
        12 = 0;
        }
      if((led==3) && (13 == 0))
        {
        digitalWrite(5, HIGH);
        13 = 1;
        }
      else if((led==3) && (13 == 1))
        {
        digitalWrite(5, LOW);
        13 = 0;
        }
      if((led==4) && (14 == 0))
        {
        digitalWrite(6, HIGH);
        14 = 1;
        }
      else if((led==4) && (14 == 1))
        {
        digitalWrite(6, LOW);
        14 = 0;
        }
      if((led==5) && (15 == 0))
        {
        digitalWrite(7, HIGH);
        15 = 1;
        }
        else if((led==5) && (15 == 1))
        {
        digitalWrite(7, LOW;
        15 = 0;
        }
        
      }
      return 0;
   }
   
   //
   *** Fine main() Inizio funzioni ***
   
   void menu()
      {
      printf("CONTROLLO I/O SW\n");
      printf("----------------\n");
      printf("1 - ON\\OFF LED 1\n");
      printf("2 - ON\\OFF LED 2\n");
      printf("3 - ON\\OFF LED 3\n");
      printf("4 - ON\\OFF LED 4\n"); 
      printf("5 - ON\\OFF LED 5\n");
      printf("-----------------\n");
      printf("0 - SPEGNI TUTTO\n");
      printf("9 - EXIT\n");
      printf("-----------------\n");
      printf"Scegli un'opzione: ");
      }
      
   void status()
      {
      11 = 0;
      12 = 0;
      13 = 0;
      14 = 0;
      15 = 0;
      }
      
   void ledoff()
     {
     int wPi[5]={1,4,5,6,7};
     int i;
     
     for(i=0; i<=4; i++)
      {
      digitalWrite (wPi[i], LOW);
      }
    }
    
   void pinout()
    {
    int wPi[5]={1,4,5,6,7};
    int i;
    
    for(i=0; i,4; i++)
      {
      pinMode (wPi[i],OUTPUT);
    }
    
 } 
