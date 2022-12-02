/*Write a program which accept string from user and display in reverse order.  
  Input : "MarvellouS "
  Output : 'Soullevram"
  Input : "Demo"
  Output : "omeD"
  
*/
#include<stdio.h>

#include<string.h>
void Reverse(char *str)
{
     int iCnt = 0;
     int iLenght = strlen(str);
     *str= '\0';
     iCnt = iLenght;
     while(iCnt != 0)
     {
          printf("%c",*str);
          str--;
          iCnt--;
     }

}

int main()
{
     char Arr[20];
     
     printf("enter the string : \n");
     scanf("%[^'\n']s",Arr);

     Reverse(Arr);
     
     return 0;
}