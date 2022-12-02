/* Write the program which return different between even    
   and odd factorial of given number.
   Input : 5
   Output :-7 (8 - 15) 
   Input : -5    
   Output :-7 (8 - 15)
   Input : 10    
   Output : 2895  (3840 - 945)
*/
#include<stdio.h>
int FactorialDiff(int iNo)
{
    int iCnt = 0, iEvenfact = 1, iOddFact = 1;
    int iFactDiff = 0;
    // for even factorial
    for(iCnt = 2; iCnt <= iNo; iCnt = iCnt+2)
    {
        iEvenfact = iEvenfact * iCnt;
    }
    iCnt = 0;
    // for odd factorial
    for(iCnt = 1; iCnt <= iNo; iCnt = iCnt+2)
    {
        iOddFact = iOddFact * iCnt;
    }
    // Difference of even factorial and odd factorial
    iFactDiff = iEvenfact - iOddFact;
    
    return iFactDiff;
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("enter number : \n");
    scanf("%d",&iValue);
    
    iRet = FactorialDiff(iValue);
    printf("Factorial Difference is : %d",iRet);

    return 0;
}