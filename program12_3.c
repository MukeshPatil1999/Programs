/* Write the program which accept number from user and count Frequency
   of 2 in it. 

   Input :  2395
   Output : 1

   Input : 1018
   Output : 0 
   Input : 922452
   Output : 3
*/
#include<stdio.h>
#include<stdbool.h>
int CountTwo(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 2)
        {
            iCnt++;
        }

        iNo = iNo/10;
    }
    return iCnt;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter your number : \n");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);
    printf("Frequency of 2 :\n%d",iRet);

    return 0;
}