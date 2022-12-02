/*Write a program which accept string from user and accept one
  character . check wether that character is present or not  
  Input : "Marvellous Multi OS"
           e
  Output : true
  Input : "Marvellous Multi OS"
           W
  Output : false
*/
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool ChkChar(char *str,char Ch)
{
     int iCnt = 0;
     int iLength = strlen(str);
     
     while(*str != 0)
     {
          if (*str == Ch)
          {
               break;
          }
          iCnt++;
          str++;
     }
     if(iLength == iCnt)
     {
          return false;
     }
     else
     {
          return true;
     }
}

int main()
{
     char Arr[25];
     char cValue = '\0';
     bool bRet = false;
     printf("Enter string: \n");
     scanf("%[^'\n']s",Arr);

     printf("Enter Charcter : \n");
     scanf(" %c",&cValue);

     bRet = ChkChar(Arr,cValue);
     if (bRet == true)
     {
          printf("Chratcter is present in String \n");
     }
     else
     {
          printf("Chratcter is Not present in String \n");
     }

     return 0;
}