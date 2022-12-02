/* Write the program which accept N number from user and print 
   5 Multiples of N .
   Input :    4
   Output : 4 8 12 16 20. 
   Input :   10
   Output : 10 20 30 40 50 . 
*/
#include<stdio.h>
void MultipleDisplay(int iNo)
{
    int iCnt = 0, iMult = 0;
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        iMult = iNo*iCnt;
        printf("%d\t",iMult);
    }

}

int main()
{
    int iValue = 0;
    printf("enter your number ; \n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}
