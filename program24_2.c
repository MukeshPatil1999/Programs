/*accept character from user. If character is small display its corresponding 
  corresponding capital character, and if if small then display its
  corresponding capital. In other cases display as it is. 
  Input : Q 
  Output : q
  Input : m
  Output : M
  Input : 4
  Output : 4
  Input : % 
  Output : %
*/
#include<stdio.h>

void Display(char Ch)
{
     if((Ch >= 'A')&&(Ch <= 'Z'))
     {
          Ch = Ch + 32;
          printf("%c",Ch);
     }
     else if ((Ch >= 'a')&&(Ch <= 'z'))
     {
          Ch = Ch - 32;
          printf("%c",Ch);
          
     }
     else
     {
          printf("%c",Ch);
     }
}

int main()
{
     char cValue = '\0';

     printf("Enter your character : \n");
     scanf("%c",&cValue);
     
     Display(cValue);
     return 0;
}