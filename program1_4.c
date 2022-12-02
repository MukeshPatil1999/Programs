#include<stdio.h>
//typedef int bool;
//#define true 1
//#define flase 0
bool check(int iNo)
{
    if ((iNo % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    return 0;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("enter number \n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if (bRet == true)
    {
        printf("number is divisible by 5 \n");
    }
    else
    {
        printf("number is not divisible by 5\n");
    }

    return 0;
}