/* Write the program which accept area in square feet and convert
   it into square meter. (1 square feet = 0.0929 square meter) 
   Input : 5
   Output : 0.464515
   Input : 7
   Output : 0.650321
   
*/
#include<stdio.h>
int SquareMeter(int iNo)
{
    double dMeter = 0.0;
    dMeter = (iNo * 0.0929);
    printf("aaa%lf",dMeter);
    
    return dMeter;

}
int main()
{
    int iValue = 0;
    double dRet = 0.0;
    printf("Enter area in Square feet : \n");
    scanf("%d",&iValue);
    
    dRet= SquareMeter(iValue);
    printf("area in square meter : %lf",dRet);
    
    return 0;
}