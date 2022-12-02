/*Write a program which accept string from user and 
  display only digits from the string.  
  Input : "Marve89llous121"
  Output : 89121
  Input : "Demo"
  Output : 
*/
#include<stdio.h>
#include<string.h>

void DisplayDigit(char *str)
{
     while(*str != 0)
     {
         
          if((*str >= '0')&&(*str <= '9'))
          {
               
               printf("%c",*str);
               
          }
          str++;
     }
}

int main()
{
     char Arr[25];

     printf("Enter the String : \n");
     scanf("%[^'\n']s",Arr);

     DisplayDigit(Arr);

     return 0;
}