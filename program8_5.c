/* write the program which acccpt number from user and display
   its table in reverse order.  
   Input : 2
   Output : 20 18 16 14 12 10 8 6 4 2
   Input : -2
   Output :20 18 16 14 12 10 8 6 4 2
   Input : -5
   Output : 50 45 40 35 30 25 20 15 10 5 
*/
#include<stdio.h>
int RevTable(int iNo)
{
    int iCnt = 0;
    int iTeb = 0;
    
    for(iCnt=10; iCnt >= 1; iCnt--)
    {
        iTeb = iNo * iCnt;
        printf("%d\t",iTeb);
    }
    
}
int main()
{
    int iValue = 0;
    
    printf("enter your number : \n");
    scanf("%d",&iValue);
    
    RevTable(iValue);
    return 0;

}