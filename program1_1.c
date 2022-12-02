#include<stdio.h>

int Division(int iValue1, int iValue2)
{
    int iAns = 0;

    if (iValue2 > iValue1)
    {
        return -1;
    }
    iAns = iValue1/iValue2;

    return iAns;

}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iRet = 0;
    printf("enter first number : \n");
    scanf("%d",&iNo1);

    printf("enter second number : \n");
    scanf("%d",&iNo2);

    iRet = Division(iNo1,iNo2);
    printf("Division is : %d \n",iRet);

    return 0;
}