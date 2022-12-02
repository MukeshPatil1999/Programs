/* Accept N numbers from user and return and return the difference between largest
 and smalllest number.
   
   Input : N :6
           Elements : 85 66 3 93 88 
   output :90 (93 - 3)
   
   
*/
#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
        int iCnt = 0; 
        int iMin = Arr[0];
        int Max = Arr[0];
        for (iCnt = 0; iCnt <iLength; iCnt++)
        {
                
                if((Arr[iCnt] < iMin))
                { 
                        iMin = Arr[iCnt];
                        
                }
                else if((Arr[iCnt] > Max))
                {
                        Max = Arr[iCnt];
                }
                else
                {}             
        }
        return  Max - iMin;
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
        
        iRet = Difference(p,iSize);
        printf("Difference between Maximum and Minimum number : %d \n",iRet);
        
        free(p);
        return 0;
}