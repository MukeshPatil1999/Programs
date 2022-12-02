/* Write the program which accepts teo numbers and 
   check wether numbers are equal or not.
   Input : 10 1o
   Output : Equal
   Input : 10 12
   Output : Not Equal
   Input : 10 -10
   Output : Not Equal
*/

#include<stdio.h>
#include<stdbool.h>

bool ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    bool bRet = false;
    printf("enetr first number :");
    scanf("%d",&iValue1);
    printf("enetr second number :");
    scanf("%d",&iValue2);
    
    bRet = ChkEqual(iValue1,iValue2);
    
    if (bRet == true)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }
    return 0;
}
