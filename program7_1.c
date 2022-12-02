/* Write the program which accept number from user and print 
   number of $ and * on screen.
   Input :    5
   Output : $  *  $  *  $  *  $  *  $  *
   Input :   3
   Output : $  *  $  *  $  *  
   Input :    -3
   Output :  $  *  $  *  $  *
*/

#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("  $  *  ");
    }

}

int main()
{
    int iValue = 0;
    printf("enter the number  : \n");
    scanf("%d",&iValue);
    Pattern(iValue);

    return 0;

}
