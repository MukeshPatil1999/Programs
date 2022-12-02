/*Write a program which accept string from user and convert it
  into UPPER case.  
  Input : "Marvellous Multi OS "
  Output : "MARVELLOUS MULTI OS "
  
*/
#include<stdio.h>
#include<string.h>

void Struprx(char *str)
{
     while(*str != '\0')
     {
          
          if((*str >= 'a')&&(*str <= 'z'))
          {
               *str = *str - 32;
          }
          printf("%c",*str);
          str++;
     }
}

int main()
{
     char Arr[25];

     printf("Enter the String : \n");
     scanf("%[^'\n']s",Arr);

     Struprx(Arr);

     return 0;
}