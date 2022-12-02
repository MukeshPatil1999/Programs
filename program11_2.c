/* Write the program which accept RANGE FROM USER AND DISPLAY 
ALL even NUMBERS IN between that range
  Input : 23   35
   Output :  24  26  28  30  32  34 
   Input : 10 10 
   Output : 10
   Input : 10 18
   Output : 10  12  14  16  18 
   Input : -10 2 
   Output : -10  -8  -6  -4  -2  0  2 
   
   Input : 90 18
   Output : Invalid Input 
   
*/
#include<stdio.h>
void RangeDisplayEven(int iNo1, int iNo2)
{
    int iCnt = 0;
    for(iCnt = iNo1; iCnt <= iNo2; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
        } 
    }

}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter first number : \n");
    scanf("%d",&iValue1);
    
    printf("Enter Second number : \n");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1, iValue2);
    
    return 0;
}