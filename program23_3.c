/* Accept character from user and check wether it is Digit  
   or not (0 -9)
   Input : 7
   Output : True
   Input : a
   Output : False
*/
#include<stdio.h>
#include<stdbool.h>
bool ChkDigit(char Ch)
{
     
     if((Ch>='0') && (Ch<='9'))
     {
          return true;
     }
     else
     {
          
          return false;
     }

}

int main()
{
     char cValue = '\0';
     bool bRet = false;

     printf("enter your digit : \n");
     scanf("%c",&cValue);
     
     bRet = ChkDigit(cValue);
     if(bRet == true)
     {
          printf("It is digit\n");
     }
     else
     {
          printf("It is not digit \n");
     }
     return 0;
}