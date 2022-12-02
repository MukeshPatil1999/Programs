/* Write the program which accept redius of circle from user
   and calculate its area. consider value of PI is 3.14.
   (Area = PI * Radius * Radius)
   Input : 5.3
   Output :88.2026
   Input : 10.4    
   Output :339.6224
*/
#include<stdio.h>
double CircleArea(float fRadius)
{
    float fArea = 0.0F;
    float PI = 3.14F;
    fArea = PI * fRadius * fRadius;
    return fArea;
}
int main()
{
    float fValue = 0.0F;
    float fRet = 0.0F;
    printf("enter the radius :\n");
    scanf("%f",&fValue);
    
    fRet = CircleArea(fValue);
    printf("Area of circle : %f",fRet);

    return 0;
}