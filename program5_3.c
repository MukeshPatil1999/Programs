//write the program which accpts number from user and display all its non-factors.
//Input : 12
// Output : 5, 7, 8, 9, 10 ,11
//Input : 13
//Output : 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12
// Input : 10
//Output : 3, 4, 6, 7, 8, 9 

#include<stdio.h>
void FactRev(int iNo)
{
    int iCnt = 0;
    printf("Non-Factors of your number : \n");
    for(iCnt= 1; iCnt < iNo; iCnt++)
    {
        if((iNo%iCnt) != 0)
        {
            printf("%d \t",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("enter your number : \n");
    scanf("%d",&iValue);
    FactRev(iValue);
    return 0;
}