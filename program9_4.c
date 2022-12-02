/* Write the program to find odd factorial of given number.
   Input : 5
   Output :15 (5*3*1) 
   Input : -5    
   Output :15 (5*3*1)
   Input : 10    
   Output : 945  (9*7*5*3*1)
*/
#include<stdio.h>
int OddFactorial(int iNo)
{
    int iCnt = 0, iOddFact = 1;
    
    
   for(iCnt = 1; iCnt <= iNo; iCnt=iCnt+2)
    {
        
        iOddFact = iOddFact * iCnt;
    }
    return iOddFact;
    
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("enter number :\n");
    scanf("%d",&iValue);
    
    iRet = OddFactorial(iValue);
    printf("Even factorial of number is : %d",iRet);

    return 0;
}