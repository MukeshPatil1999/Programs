/*Write a program which accept string from user and accept one
  character . and return frequcncy of that character.  
  Input : "Marvellous Multi OS"
           M
  Output : 2
  Input : "Marvellous Multi OS"
           W
  Output : w
*/
#include<stdio.h>
#include<string.h>

int CountChar(char *str,char Ch)
{
     int iCnt = 0;
     while(*str != 0)
     {
          if (*str == Ch)
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
     char cValue = '\0';
     int iRet = 0;
     printf("Enter string: \n");
     scanf("%[^'\n']s",Arr);

     printf("Enter Charcter : \n");
     scanf(" %c",&cValue);

     iRet = CountChar(Arr,cValue);
     printf("Frequcncy of character in string : %d\n",iRet);
     return 0;
}