/* Accept N numbers from user and accept one another 
   number as No, return frequnecy of No form it.
   
   Input : N :6
           No : 66
           Elements : 85 66 3 66 93 88  
   output : 2
   
   Input : N :6
           No : 12
           Elements : 85 11 3 80 11  111 
   output : 0
*/
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iValue)
{
        int iCnt = 0, iFrq = 0;
        for (iCnt = 0; iCnt < iLength; iCnt++)
        {
                if(Arr[iCnt]==iValue)
                {
                        iFrq++;
        
                }
                
        }
        return iFrq;
        
        
}

int main()
{
        int *p = NULL;
        int iSize = 0, iCnt = 0, iNo = 0;
        int iRet = 0;

        printf("Enter Number of elements : \n");
        scanf("%d",&iSize);

        printf("Enter the number which frequency u want :\n");
        scanf("%d",&iNo);

        p = (int*)malloc(iSize*sizeof(int));

        if(p==NULL)
        {
                printf("Unable to allocate memory \n");
                return -1;
        }
        
        printf("Enter %d elements : \n",iSize);
        for(iCnt = 0; iCnt<iSize; iCnt++)
        {
                printf("Enter element %d :\n",iCnt+1);
                scanf("%d",&p[iCnt]);
        }       
        
        iRet = Frequency(p,iSize,iNo);
        printf("frequency odf 11 is : %d\n",iRet);

        free(p);
        return 0;
}