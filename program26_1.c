/*Write a program which accept string from user and convert it
  into lower case.  
  Input : "Marvellous Multi OS "
  Output : 'marvellous multi os"
  
*/
#include<stdio.h>
#include<string.h>

void Strlwrx(char *str)
{
     while(*str != '\0')
     {
          
          if((*str >= 'A')&&(*str <= 'Z'))
          {
               
               *str = *str + 32;
               
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

     Strlwrx(Arr);

     return 0;
}