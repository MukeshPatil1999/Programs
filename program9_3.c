/* Write the program to find even factorial of given number.
   Input : 5
   Output : 8  (4*2)
   Input : -5    
   Output : 8  (4*2)
   Input : 10    
   Output : 3840  (10*8*6*4*2)
*/
#include<stdio.h>
int EvenFactorial(int iNo)
{
    int iCnt = 0, iEvenFact = 1;
    
    
   for(iCnt = 2; iCnt <= iNo; iCnt=iCnt+2)
    {
        
        iEvenFact = iEvenFact * iCnt;
    }
    return iEvenFact;
    
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("enter number :\n");
    scanf("%d",&iValue);
    
    iRet = EvenFactorial(iValue);
    printf("Even factorial of number is : %d",iRet);

    return 0;
}