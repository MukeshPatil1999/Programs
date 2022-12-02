/* Accept N numbers from user and return frequency of even numbers.
   
   Input : N :6
           Elements : 85 66 3 80 93 88
   output : 3 

*/
#include<stdio.h>
#include<stdlib.h>

int EvenCount(int Arr[],int iLength)
{
        int iCnt = 0, iEvencnt = 0;
        for(iCnt = 0; iCnt < iLength; iCnt++)
        {
                if (Arr[iCnt]%2==0)
                {
                        iEvencnt++;
                }
        }
        return iEvencnt;

}
int main()
{
        int iSize = 0, iCnt = 0, iRet = 0;
        int *p = NULL;

        printf("enter number of elements :\n");
        scanf("%d",&iSize);

        p = (int*)malloc(iSize*sizeof(int));

        if(p == NULL)
        {
                printf("unable to aalocate memory");
                return -1;
        }
        
        printf("Enter %d elements\n",iSize);
        for(iCnt = 0; iCnt<iSize; iCnt++)
        {
                printf("Enter element %d :\n",iCnt+1);
                scanf("%d",&p[iCnt]);
        }

        iRet = EvenCount(p,iSize);
        printf("count of Even numbers are : %d\n",iRet);

        free(p);
        return 0;
}
