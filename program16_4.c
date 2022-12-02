/* Accept N numbers from user and accept range, display
all elements from that range.
   
   Input : N :6
           start : 60
           end : 90
           Elements : 85 66 3 76 93 88  
   output : 66 78 88
   
   Input : N :6
           start : 30
           end : 50
           Elements : 85 66 3 66 93 88  
   output : 0

   
*/
#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
        int iCnt = 0; 
        printf("elements in betn range : \n");
        for (iCnt = 0; iCnt <iLength; iCnt++)
        {
                
                if((Arr[iCnt]>iStart) && (Arr[iCnt]<iEnd))
                {
                        printf("%d\t",Arr[iCnt]);

                }
                
        }
}

int main()
{
        int *p = NULL;
        int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
        
        printf("Enter Number of elements : \n");
        scanf("%d",&iSize);

        printf("Enter the START :\n");
        scanf("%d",&iValue1);
        
        printf("Enter the END :\n");
        scanf("%d",&iValue2);

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
        
        Range(p,iSize,iValue1,iValue2);
        
        free(p);
        return 0;
}