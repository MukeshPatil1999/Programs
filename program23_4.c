/* Accept character from user and check wether it is small case  
   or not (a - z)
   Input : d
   Output : True
   Input : B
   Output : False
*/
#include<stdio.h>
#include<stdbool.h>
bool ChkSmall(char Ch)
{
     
     if((Ch>='a') && (Ch<='z'))
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

     printf("enter your character : \n");
     scanf("%c",&cValue);
     
     bRet = ChkSmall(cValue);
     if(bRet == true)
     {
          printf("It is small case character\n");
     }
     else
     {
          printf("It is not small case character \n");
          
     }
     return 0;
}