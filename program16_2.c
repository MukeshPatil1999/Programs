/* Accept N numbers from user and accept one another 
   number as No, and return first occurance of tha number.
   
   Input : N :6
           No : 66
           Elements : 85 66 3 66 93 88  
   output : 1
   
   Input : N :6
           No : 12
           Elements : 85 11 3 80 11  111 
   output : -1
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int FirstOcc(int Arr[], int iLength, int iValue)
{
        int iCnt = 0; 
        for (iCnt = 0; iCnt < iLength; iCnt++)
        {
                if(Arr[iCnt] ==iValue)
                {
                        break;
                }
                
        }
        if (iCnt == iLength)
        {
                return -1;
        }
        else
        {
                return iCnt;
        }
        
        
        
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
        
        iRet = FirstOcc(p,iSize,iNo);
        if(iRet == -1)
        {
                printf("There is no such number \n");
        }
        else
        {
                printf("first occurance of number is %d",iRet);
        }
        
        free(p);
        return 0;
}