/*Write a program which accept string from user and check wether it contains
  vowels in it or not.  
  Input : "Marvellous "
  Output : true
  Input : "Demo"
  Output : true
  Input : "xyz"
  Output : false
*/
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
bool ChkVowel(char *str)
{
     int iCnt = 0;
     int iLenght = strlen(str);
     //printf("lenght of string : %d\n",And);
     while(*str != '\0')
     {
          if((*str == 'a')||(*str == 'e')||(*str == 'i')||(*str == 'o')||(*str == 'u'))
          {
               break;
          }
          str++;
          iCnt++;
     }
     
     if(iLenght == iCnt)
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
     char Arr[20];
     bool bRet = false;
     printf("enter the string : \n");
     scanf("%[^'\n']s",Arr);

     bRet = ChkVowel(Arr);
     if (bRet == true)
     {
          printf("string contains Vowel\n");
     }
     else
     {
          printf("string Not Contain Vowel");
     }
     return 0;
}