// Accept number from user and check wether number is even or odd.
#include<stdio.h>

#define true 1
#define false 0

typedef int bool;

bool ChkEven(int iNo)
{
    if ((iNo/2) == 0)
    {
        return true;
    }
    
}
int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("enter your number : ");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if (bRet = true)
    {
        printf("Number is Even \n");
    }
    else
    {
        printf("Number is Odd \n");
    }
    return 0;
}