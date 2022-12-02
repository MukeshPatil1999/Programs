/* Accept character from user and check wether it is capital  
   or not (A - Z  )
   Input : F
   Output : True
   Input : a
   Output : False
*/
#include<stdio.h>
#include<stdbool.h>
bool ChkCapital(char Ch)
{
     //printf("%c",Ch);
     if((Ch>='A') && (Ch<='Z'))
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
     
     bRet = ChkCapital(cValue);
     if(bRet == true)
     {
          printf("Character is capital\n");
     }
     else
     {
          printf("Character is not capital \n");
     }
     return 0;
}