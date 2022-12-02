/*Write a program which accept string from user and count 
  number of capital character  
  Input : "Marvellous Multi os"
  Output : 4
*/
#include<stdio.h>
int CountCapital(char *str)
{
     int iCnt = 0, iCapi = 0;
     char iDigit ='\0';

     while(*str != '\0')
     {
          if((*str >= 'A')&&(*str <= 'Z'))
          {
               iCnt++;
          } 
          str++;
     }
     return iCnt;
}
int main()
{
     char Arr[20];
     int iRet = 0;
     printf("enter the string \n");
     scanf("%[^'\n']s",Arr);
   
     iRet = CountCapital(Arr);
     printf("Numbers of Capital letters in string are %d\n",iRet);
     
     return 0;
}