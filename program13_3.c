/* Write the program which accept number from user and return 
   count of digits in between 3 and 7.
   Input :  2395
   Output : 1

   Input : 1018
   Output : 0
   Input : 4521
   Output : 2
*/
#include<stdio.h>
int CountRange(int iNo)
{
    int iDigit = 0, iRange = 0;
    while(iNo != 0)
    {
        iDigit = iNo%10;
        if((iDigit > 3)&&(iDigit < 7))
        {
            iRange++;
        }
        iNo = iNo/10;
    }
    return iRange;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter your number : \n");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("number of digits in between 3 to 7: %d",iRet);

    return 0;
}