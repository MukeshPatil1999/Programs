// write the program which accepts number from user and print even factors of that number.
// Input : 36
// Output : 2,  6, 8, 12, 18.

#include<stdio.h>

void DisplayEvenFactor(int iValue)
{
    int iCnt = 0;
    if ( iValue <= 0 )
    {
        iValue = -iValue;
    }
    printf("even factors of your number are : \n");
    for (iCnt = 1; iCnt < iValue; iCnt++)
    {
        if ((iValue % iCnt == 0) && (iCnt % 2 == 0))
        {
            printf("%d \t",iCnt);
        }

    }
}
int main()
{
    int iNo = 0;
    printf("enter ur number : \n");
    scanf("%d",&iNo);

    DisplayEvenFactor(iNo);

    return 0;
}