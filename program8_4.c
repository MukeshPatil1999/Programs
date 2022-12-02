/* write the program which acccpt number from user and display
   its table.  
   Input : 2
   Output : 2 4 6 8 10 12 14 16 18 20
   Input : 5
   Output :5 10 15 20 25 30 35 40 45 50
   Input : -5
   Output : 5 10 15 20 25 30 35 40 45 50
*/
#include<stdio.h>
int Table(int iNo)
{
    int iCnt = 0;
    int iTeb = 0;
    for(iCnt=1; iCnt <= 10; iCnt++)
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
    
    Table(iValue);
    return 0;

}