// Accept number from user if number is less 10 then print "Hello" otherwise print "Demo".
#include<stdio.h>
void Display(int iNo)
{
    if (iNo < 10)
    {
        printf("Hello \n");
    }
    else
    {
        printf("Demo \n");
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