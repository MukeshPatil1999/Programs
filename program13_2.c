/* Write the program which accept number from user and return 
   count of Odd digits.
   

   Input :  2395
   Output : 3

   Input : 1018
   Output : 2
   Input : -1018
   Output : 2
*/
#include<stdio.h>
int CountOdd(int iNo)
{
    int iDigit = 0,iOdd = 0; 
    
    while(iNo!=0)
    {
        iDigit = iNo%10;
        if(iDigit%2 != 0)
        {
            iOdd++;
        }
        iNo = iNo/10;
    }
    return iOdd;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("enter your number :\n");
    scanf("%d",&iValue);
    
    iRet = CountOdd(iValue);
    printf("number if Odd digits : %d\n",iRet);
    return 0;
}