/* Accept N numbers from user and return smallest number.
   
   Input : N :6
           Elements : 85 66 3 93 88 
   output :3
   
   
*/
#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength)
{
        int iCnt = 0; 
        int iMin = Arr[0];

        for (iCnt = 0; iCnt <iLength; iCnt++)
        {
                
                if(Arr[iCnt] < iMin)
                { 
                        iMin = Arr[iCnt];

                }
                
        }
        return iMin;
}

int main()
{
        int *p = NULL;
        int iSize = 0, iCnt = 0,iRet =0;
        
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
        
        iRet = Minimum(p,iSize);
        printf("Minimum number : %d \n",iRet);
        
        free(p);
        return 0;
}