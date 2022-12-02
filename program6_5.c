/* Write a program which accept total marks and obtained marks  
   from user and calculate parcentage.
   Input : 1000   745
   Output : 74.5%
   
*/

#include<stdio.h>
float Percentage(int iNo1,int iNo2)
{
    
    float fPercent = 0.0;
    fPercent = iNo2/iNo1*100;
    
    
    return fPercent;
}
int main()
{

    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("enter total marks : \n");
    scanf("%d",&iValue1);
    
    printf("enter obtained marks : \n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);
    printf("percentage is : %f ",fRet);

    return 0;
}