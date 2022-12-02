/* Write the program which accept 1 number from user and cheack
wether that number is greater than 100 or not 
*/
//Input : 101
//Output : Greater
//Input : 39
//Output : Smaller

#include<stdio.h>
#include<stdbool.h>

bool ChkGreater(int iNo)
{
    if (iNo > 100)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("enter your number : \n");
    scanf("%d",&iValue);
    bRet = ChkGreater(iValue);
    if (bRet == true)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }
    return 0;
}