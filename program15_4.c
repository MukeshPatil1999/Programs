/* Accept N numbers from user check wheter that numbers contains 11
in it or not.
   
   Input : N :6
           Elements : 85 66 3 80 93 88  
   output : 0
   
   Input : N :6
           Elements : 85 11 3 80 11  111 
   output : 2
*/
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
        int iCnt = 0, iFrq = 0;
        for (iCnt = 0; iCnt < iLength; iCnt++)
        {
                if(Arr[iCnt]==11)
                {
                        iFrq++;
        
                }
                
        }
        return iFrq;
        
        
}

int main()
{
        int *p = NULL;
        int iSize = 0, iCnt = 0;
        int iRet = 0;

        printf("Enter Number of elements : \n");
        scanf("%d",&iSize);

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
        
        iRet = Frequency(p,iSize);
        printf("frequency odf 11 is : %d\n",iRet);

        free(p);
        return 0;
}