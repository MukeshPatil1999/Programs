/* write the program to find factorial of given number  
   Input : 5
   Output : 120 (5*4*3*2*1)
   Input : -5
   Output : 120 (5*4*3*2*1)
   Input : 4
   Output : 24 (4*3*2*1)
*/
#include<stdio.h>
int Factorial(int iNo)
{
    int iCnt = 0, iMult = 1;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iMult = iMult * iCnt;
    }
    return iMult;

}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("enter your number : \n");
    scanf("%d",&iValue);
    
    iRet = Factorial(iValue);
    printf("Factorial is : %d\n",iRet);
    return 0;

}