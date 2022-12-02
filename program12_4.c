/* Write the program which accept number from user and count Frequency
   of 4 in it. 

   Input :  2395
   Output : 1

   Input : 104414
   Output : 3
   Input : 922452
   Output : 1
*/
#include<stdio.h>
int CountFour(int iNo)
{
    int iFrequency = 0;
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo%10;
        if (iDigit == 4)
        {
            iFrequency++;
        }
        iNo = iNo/10;
    }
    return iFrequency;

}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("enter your number: \n");
    scanf("%d",&iValue);
    
    iRet = CountFour(iValue);
    printf("Frequency of 4 is : \n%d",iRet);

    return 0;
}