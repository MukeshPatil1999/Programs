/* Accept N numbers from user and accept one another 
   number as No, and check whether that number is present or not.
   
   Input : N :6
           No : 66
           Elements : 85 66 3 66 93 88  
   output : True
   
   Input : N :6
           No : 12
           Elements : 85 11 3 80 11  111 
   output : false
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Check(int Arr[], int iLength, int iValue)
{
        int iCnt = 0; 
        for (iCnt = 0; iCnt < iLength; iCnt++)
        {
                if(Arr[iCnt] ==iValue)
                {
                        break;
                }
                
        }
        
        if (iCnt == iLength )
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
        int iSize = 0, iCnt = 0, iNo = 0;
        bool bRet = 0;

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
        
        bRet = Check(p,iSize,iNo);
        if (bRet == true)
        {
                printf("your number %d is present \n",iNo);
        }
        else
        {
                printf("your number %d is not present \n",iNo);
        }

        free(p);
        return 0;
}