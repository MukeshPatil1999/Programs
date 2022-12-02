/* Accept N numbers from user check wheter that numbers contains 11
in it or not.
   
   Input : N :6
           Elements : 85 66 11 80 93 88 90 
   output : 11 is present

*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool check(int Arr[], int iLength)
{
        int iCnt = 0;
        for (iCnt = 0; iCnt < iLength; iCnt++)
        {
                if(Arr[iCnt]==11)
                {
                        break;
        
                }
                
        }
        if(iCnt == iLength)
        {
                return false;
        }
        else
        {
                return true;
        }
        
}

int main()
{
        int *p = NULL;
        int iSize = 0, iCnt = 0;
        bool bRet = false;

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
        
        bRet = check(p,iSize);
        if(bRet == true)
        {
                printf("11 is present");
                
        }
        else
        {
                printf("11 is Not Present \n");
        }       
        
        free(p);
        return 0;
}