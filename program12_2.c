/* Write the program which accept number from user and check wheter
   it contains 0 in it or not. 

   Input :  2395
   Output : there is no Zero

   Input : 1018
   Output : It contains zero. 
   Input : 9000
   Output : It contains Zero
*/
#include<stdio.h>
#include<stdbool.h>
bool CHKZero(int iNo)
{
    int iDigit = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 0)
        {
            return true;
        }

        iNo = iNo/10;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("enter your number : \n");
    scanf("%d",&iValue);

    bRet = CHKZero(iValue);
    if (bRet == true)
    {
        printf("It Contains Zero ");
    }   
    else
    {
        printf("There is no Zero ");
    }

    return 0;
}