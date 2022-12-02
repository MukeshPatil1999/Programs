/* Write the program which accept RANGE FROM USER AND DISPLAY ALL NUMBERS IN between
   that range
  Input : 23   35
   Output : 23 24 25 26 27 28 29 30 31 32 33 34 35 
   Input : 10 10 
   Output : 10
   Input : 10 18
   Output : 10 11 12 13 14 15 16 17 18 
   Input : -10 2 
   Output : -10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2 
   
   Input : 90 18
   Output : Invalid Input 
   
*/
#include<stdio.h>
void RangeDisplay(int iNo1, int iNo2)
{
    int iCnt = 0;

    if(iNo1 > iNo2)
    {
        printf("invalid input");
    }
    for(iCnt = iNo1; iCnt <= iNo2; iCnt++)
    {
        printf("%d\t",iCnt);
    }

}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("enter first number : \n");
    scanf("%d",&iValue1);
    
    printf("enter first Last : \n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);
    return 0;
}   