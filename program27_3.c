/*Write a program which accept string from user and accept one
  character . and return index of first character.  
  Input : "Marvellous Multi OS"
           M
  Output : 0
  Input : "Marvellous Multi OS"
           W
  Output : -1
  Input : "Marvellous Multi OS"
           e
  Output : 4

*/
#include<stdio.h>
#include<string.h>

int FirstChar(char *str,char Ch)
{
     int iCnt = 0;
     printf("ch %c",Ch);
     while(str[iCnt] != '\0')
     {
          printf("stricnt : %c",str[iCnt]);
          if (str[iCnt] == Ch)
          {
               //printf("count : %d\n",iCnt);
               break;   
          }
          
          iCnt++;
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

     iRet = FirstChar(Arr,cValue);
     printf("Fist Occurance of character in string is at index : %d\n",iRet);
     return 0;
}