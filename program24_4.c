/*accept character from user and check wether it is special 
  symbol or not (! @ # $ % ^ & * ) 
  Input : %
  Output : True
  Input : d
  Output : false
  
*/
#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char Ch)
{
     if ((Ch == '!')||(Ch == '@')||(Ch == '#')||(Ch == '$')||(Ch == '%')||(Ch == '^')||(Ch == '&')||(Ch == '*'))
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

     printf("enter Your character : \n");
     scanf("%c",&cValue);

     bRet = ChkSpecial(cValue);
     if (bRet == true)
     {
          printf("It is Special Symbol \n");
     }     
     else
     {
          printf("It is not Special Symbol \n");
     }
     return 0;
}