/* Write the program which accept number from user and return 
   Multiplication of all digits.
   Input :  2395
   Output : 270

   Input : 1018
   Output : 8
   Input : 9940
   Output : 144
*/
#include<stdio.h>
int MultiDigit(int iNo)
{
    int iDigit = 0, iRange = 0, iMult = 1;
    while(iNo != 0)
    {
        iDigit = iNo%10;
        iMult = iMult*iDigit;
        iNo = iNo/10;
    }
    return iMult;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter your number : \n");
    scanf("%d",&iValue);

    iRet = MultiDigit(iValue);

    printf("Multiplication of Digits: %d",iRet);

    return 0;
}