/* Accept character from user and check wether it is alphabet 
   or not (A - Z  a -z)
   Input : F
   Output : True
   Input : &
   Output : False
*/
#include<stdio.h>
#include<stdbool.h>
bool ChkAlpha(char Ch)
{
     //printf("%c",Ch);
     if((Ch>='A')&&(Ch<='Z')&&(Ch>='A')&&(Ch<='Z'))
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

     printf("enter your Character : \n");
     scanf("%c",&cValue);
     
     bRet = ChkAlpha(cValue);
     if(bRet == true)
     {
          printf("It is Character \n");
     }
     else
     {
          printf("It is not Character \n");
     }
     return 0;
}