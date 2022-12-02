/*Write a program which accept string from user and count 
  number of white spaces .  
  Input : "Marvellous"
  Output : 0
  Input : "Marvellous Infosystem"
  Output : 1
  Input : "Marvellous Infosystems by Piyush Manohar Khairnar"
  Output : 5

*/
#include<stdio.h>
#include<string.h>

int CountWhite(char *str)
{
     int iCnt = 0;
     while(*str != 0)
     {
         
          if(*str == ' ')
          {
               iCnt++;
          }
          str++;
     }
     return iCnt;
}

int main()
{
     char Arr[25];
     int iRet = 0;

     printf("Enter the String : \n");
     scanf("%[^'\n']s",Arr);

     iRet = CountWhite(Arr);

     printf("Number of White Spaces are : %d\n",iRet);
     return 0;
}