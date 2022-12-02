/* Write the program which accept accept temperature in Fahrenheit
   and convert into celsius.
   (1 Celsius = (Fahrenheit-32) * (5 / 9))
   Input : 10
   Output : -12.2222 (10-32) * (5/9)
   Input : 34
   Output : 1.11111 (34 -32) * (5/9)
   
*/
#include<stdio.h>
float FHtoCs(float fTemp)
{
    
    float fCelsius = 0.0;
    fCelsius = ((fTemp-32)*(0.55555556));
    return fCelsius;
}
int main()
{
    float fValue = 0.0, fRet = 0.0;
    printf("enter tempreature in Fahrenheit : ");
    scanf("%f",&fValue);
    
    fRet = FHtoCs(fValue);
    printf("Tempreature in Celsius : %f",fRet);
    return 0;
}