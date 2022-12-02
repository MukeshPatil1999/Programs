/*Write a program which accept string from user and 
  toggle the case.  
  Input : "Marvellous Multi OS "
  Output : "mARVELLOUS mULTI os "
  
*/
#include<stdio.h>
#include<string.h>

void Strtoggle(char *str)
{
     while(*str != '\0')
     {
          if((*str >= 'a')&&(*str <= 'z'))
          {
               *str = *str - 32;
          }
          else  
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

     Strtoggle(Arr);

     return 0;
}