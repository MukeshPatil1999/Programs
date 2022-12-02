/*Write a program which accept string from userr reverse 
  that string in place.  
  Input : "abcd"
           
  Output : "dcba"
  Input : "abba"
           
  Output : "abba"
  
*/
#include<stdio.h>
#include<string.h>
void StrRevX(char *str)
{
     char *start = str;
     char *end = str;
     char temp = '\0';

     while(*end != '\0')
     {
          end++;
     }
     end--;

     while(start < end)
     {
          temp = *start;
          *start = *end;
          *end = temp;

          start++;
          end--;
     }
}

int main()
{
     char Arr[20];

     printf("Enter the String : \n");
     scanf("%[^'\n']s",Arr);

     StrRevX(Arr);

     printf("Reverse String Is : %s",Arr);
     return 0;
}