/* Write the program which accept range from user and return and display all 
numbers in between that range in reverse order.

  Input : 23   35
   Output :  35 34 33 32 31 30 29 28 27 26 25 24 23 

   Input : 10 18 
   Output : 70
   Input : 10 10
   Output : 10
   
   Input : -10 2
   Output : 2 1 0 -1 -2 -3 -4 -5 -6 -7 -8 -9 -10 
   
*/
#include<stdio.h>
void RangeDisplayRev(int iNo1, int iNo2)
{
    int iCnt = 0;
    
    
    for(iCnt = iNo2; iCnt >= iNo1; iCnt--)
    {
        printf("%d\t",iCnt);
    
    }
    

}
int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;
    printf("Enter first number : \n");
    scanf("%d",&iValue1);
    
    printf("Enter Second number : \n");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1, iValue2);
    return 0;
}