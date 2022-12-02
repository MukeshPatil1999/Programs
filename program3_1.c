// write program which accepts one number from user and print that number of even numbers on screen.
// Input : 7
// output : 2 4 6 8 10 12 14

#include<stdio.h>

int PrintEven(int iNo)
{
    int iCnt = 0;
    int iLim = iNo*2;
    if (iNo <= 0)
    {
        return -1;
    }
    for (iCnt = 2; iCnt <= iLim ; iCnt=iCnt+2)
    {
        printf("%d \t",iCnt);
    }


}

int main()
{
    int iValue = 0;

    printf("enter your number : \n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}



