/*Write a program which accept string from user and return difference between
  frequency of small chracter and frequency of capital character  
  Input : "MarvellouS "
  Output : 6 (8 - 2)
*/
#include<stdio.h>

int Difference(char *str)
{
     int iSmall = 0, iCapital = 0;
     while(*str != '\0')
     {
          if((*str >= 'a')&&(*str <= 'z'))
          {
               iSmall++;
          }
          else
          {
               iCapital++;
          }
          str++;
     }
     return iSmall - iCapital;
}

int main()
{
     char Arr[20];
     int iRet = 0;
     printf("enter the string : \n");
     scanf("%[^'\n']s",Arr);

     iRet = Difference(Arr);

     printf("Difference of small Characeter and capital characters : %d",iRet);

     return 0;
}