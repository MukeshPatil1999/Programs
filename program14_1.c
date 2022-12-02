/* Accept N numbers from user and return difference between 
   summation of even elements and summation of odd elements.
   
   Input : N :6
           Elements : 85 66 3 80 93 88
   output : 53 (234 -181) 

*/
#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[],int iLength)
{
        int iCnt = 0, iEven = 0, iOdd = 0;
        for(iCnt=0; iCnt < iLength; iCnt++)
        {
                if (Arr[iCnt]%2 == 0)
                {
                        iEven = iEven + Arr[iCnt];
                }
                else
                {
                        iOdd = iOdd + Arr[iCnt];
                }
        }
        return iEven - iOdd;

}

int main()
{
        int iSize = 0, iRet = 0, iCnt = 0 ;
        int *p = NULL;

        printf("enter number of elements: \n");
        scanf("%d",&iSize);

        p = (int*)malloc(iSize * sizeof(int));
        if(p == NULL)
        {
                printf("unable to allocate memory");
                return -1;
        }
        printf("enter %d elements :\n",iSize);
        for(iCnt = 0; iCnt<iSize; iCnt++)
        {
                scanf("%d",&p[iCnt]);
        }
        iRet = Difference(p,iSize);
        printf("Result is %d",iRet);
        return 0;
}