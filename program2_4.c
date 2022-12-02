// Accept two numbers from users and display first number in second number of times.
// Input : 12 5
// Output : 12 12 12 12 12

#include<stdio.h>

int Display(int iNo, int iFrequency)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d \t",iNo);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;
    
    printf("Enter first number : \n");
    scanf("%d",&iValue);
    printf("Second first number : \n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}