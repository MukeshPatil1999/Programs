/* Write the program which accept number from user and return 
   summation of even Digits and sumation of odd digits.
   Input :  2395
   Output : 15 (2 -17)

   Input : 1018
   Output : 6 (8 - 2)
   Input : 8440
   Output : -18 (0 - 18)
*/
#include<stdio.h>
int CountDiff(int iNo)
{
    int iDigit = 0, iEven = 0, iOdd = 0;
    while(iNo != 0)
    {
        iDigit = iNo%10;
        if(iDigit%2 == 0)
        {
            iEven = iEven + iDigit;
        }
        else
        {
            iOdd = iOdd + iDigit;
        }
        iNo = iNo/10;
    }
    return (iEven - iOdd);
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter your number : \n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("summation of even Digits and sumation of odd digits: %d",iRet);

    return 0;
}