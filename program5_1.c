// write the program which accepts from user and display its multiplication of factors. with time complexity     
// Input : 12
// Output : 144  (1 * 2 * 3 * 4 * 6)
// Input : 13
// Output : (1)
// Input : 10
// Output : 10 (1 * 2 * 5 )

#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;
    for(iCnt = 1; iCnt <=(iNo/2); iCnt++)
    {
        //printf("%d \n",iCnt);
        if (iNo % iCnt == 0)
        {
            //printf("%d ",iCnt);
            iMult = iMult*iCnt;
            //printf("%d",iMult);  
        }
        //printf("%d",iMult);
        //return iMult;
        
    }
    return iMult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("enter your numbeer : \n");
    scanf("%d",&iValue);
    
    iRet = MultFact(iValue);
    
    printf("multiplication of factors : \n %d \t",iRet);
    return 0;
}