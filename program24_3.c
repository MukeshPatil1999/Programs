/*accept character from user. If it is Capital then display all
  the characters from the input characters til Z. If input character
  is small then print all the characters in reverse order till a.
  In other case return directly. 
  Input : Q 
  Output : Q R S T U W X Y Z 
  Input : m
  Output : m l k i h g f e d c b a 
  Input : 8
  Output : 
  Input : % 
  Output : 
*/
#include<stdio.h>

void Display(char Ch)
{
     char iCnt1 = '\0', iCnt2 = '0';

     if((Ch >= 'A')&&(Ch <= 'Z'))
     {
          
          for(iCnt1 = Ch; iCnt1 <= 90; iCnt1++)
          {
               printf("%c\t",iCnt1);
          }

     }
     else if ((Ch >= 'a')&&(Ch <= 'z'))
     {
          for(iCnt2 = Ch; iCnt2 >= 97; iCnt2--)
          {
               printf("%c\t",iCnt2);
          }
     }
     else
     {
          return ;
     }

}

int main()
{
     char cValue = 0;
     printf("enter Your Character : \n");
     scanf("%c",&cValue);

     Display(cValue);

     return 0;
}