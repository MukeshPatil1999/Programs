/* Write the program which accept width and height of rectangle
from user and calculate its area .(Area = Width * Height) 
   Input : 5.3 9.78
   Output : 51.834
   
*/
#include<stdio.h>
double RectArea(float fWidth, float fHeight)
{
    float fArea = 0.0F;
    
    fArea = fWidth * fHeight;
    return fArea;
}
int main()
{
    float fValue1 = 0.0F;
    float fValue2 = 0.0F;
    float fRet = 0.0F;
    printf("enter the Width :\n");
    scanf("%f",&fValue1);
    printf("enter the Height :\n");
    scanf("%f",&fValue2);

    fRet = RectArea(fValue1,fValue2);
    printf("Area of Rectangle : %f",fRet);

    return 0;
}