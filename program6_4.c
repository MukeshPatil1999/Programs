/* Write a program which accept three numbers 
   and print its multiplication  
   Input : 5   4   7
   Output : 140
   Input : 5   0   7
   Output : 35
   Input : 0   0    0
   Output : 0
*/

#include<stdio.h>

int Multiplay(int iNo1,int iNo2,int iNo3)
{
    int iMult = 0;
    if(iNo1==0 || iNo2==0 || iNo3==0)
    {
        iNo1,iNo2,iNo3 = 1;
    }

    iMult = iNo1*iNo2*iNo3;
    return iMult;
    
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int bRet = 0;
    printf("enetr Three number :\n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);
    
    bRet = Multiplay(iValue1,iValue2,iValue3);
    
    printf("Multiplication is : %d",bRet);
    return 0;
}
