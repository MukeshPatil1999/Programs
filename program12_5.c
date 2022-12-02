/* Write the program which accept number from user and count Frequency
   of such digit which are less than 6. 

   Input :  2395
   Output : 3

   Input : 1018
   Output : 3
   Input : 9779
   Output : 0
*/
#include<stdio.h>
int Count(int iNo)
{
    int iFrequency = 0;
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo%10;
        if (iDigit < 6)
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
    
    iRet = Count(iValue);
    printf("Frequency of digits which are less than 6 is : \n%d",iRet);

    return 0;
}