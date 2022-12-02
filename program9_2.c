/* Accept number from user and return its corresponding value
   in indian currency. Consider 1$ as 70 rupees.
   Input : 10    
   Output : 700
   Input : 3    
   Output : 270
   Input : 1200    
   Output : 84000
*/
#include<stdio.h>
int DollarToInr(int iNo)
{
    int iDollar = 70;
    int iRupee = 0;
    
    iRupee = iNo * iDollar;

    return iRupee;

}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("enter number in USD :\n");
    scanf("%d",&iValue);
    
    iRet = DollarToInr(iValue);
    printf("Value in INR is : %d",iRet);
    return 0;
}