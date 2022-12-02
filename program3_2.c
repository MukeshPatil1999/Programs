// write the program which accepts number from user and print factors of that number.
// Input : 24
// Output : 1 , 2,  4, 6, 8, 12

#include<stdio.h>

void DisplayFactor(int iValue)
{
    int iCnt = 0;
    if ( iValue <= 0 )
    {
        iValue = -iValue;
    }
    printf("even factors of your number are : \n");
    for (iCnt = 1; iCnt < iValue; iCnt++)
    {
        if (iValue % iCnt == 0)
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

    DisplayFactor(iNo);

    return 0;
}