/* Write the program which accept number from user and return 
   count of even digits.
   

   Input :  2395
   Output : 1

   Input : 1018
   Output : 2
   Input : -1018
   Output : 2
*/
#include<stdio.h>
int CountEven(int iNo)
{
    int iDigit = 0,iEven = 0; 
    
    while(iNo!=0)
    {
        iDigit = iNo%10;
        if(iDigit%2 == 0)
        {
            iEven++;
        }
        iNo = iNo/10;
    }
    return iEven;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("enter your number :\n");
    scanf("%d",&iValue);
    
    iRet = CountEven(iValue);
    printf("number if even digits : %d\n",iRet);
    return 0;
}