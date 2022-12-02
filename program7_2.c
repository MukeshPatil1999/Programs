/* Write the program which accept number from user and print 
   number number till that number.
   Input :    8
   Output : 1  2  3  4  5  6  7  8
   Input :   5
   Output : 1  2   3  4  5  
*/

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}
int main()
{
    int iValue = 0;
    printf("enter your number : \n");
    scanf("%d",&iValue);
    
    Display(iValue);
    
    return 0;
}