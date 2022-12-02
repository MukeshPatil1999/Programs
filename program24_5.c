/*accept character from user and display its ASCII value in Decimal,
  Octal and hexadecimal format 
  Input :  A
  Output : Decimal  65
           Octal    0x41
           Hexadecimal 0101

  
*/
#include<stdio.h>

void Display(char Ch)
{
     printf("Decimal : %d\n",Ch);
     printf("Octal : %o\n",Ch);
     printf("Hexadecimal : %x\n",Ch);
}

int main()
{
     char cValue = '\0';
     
     printf("enter Your character : \n");
     scanf("%c",&cValue);

     Display(cValue);

     return 0;
}