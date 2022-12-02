/* Accept N numbers from user and return difference between
   frequency of even numbersand odd numbers.
   
   Input : N :7
           Elements : 85 66 3 80 93 88 90 
   output : 1 (4-3)

*/
#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[], int iLength)
{
        int iCnt = 0, Evencnt =0, Oddcnt =0;
        for (iCnt = 0; iCnt < iLength; iCnt++)
        {
                if(Arr[iCnt]%2==0)
                {
                        Evencnt++;
                }
                else 
                {
                        Oddcnt++;
                }
        }
        return Evencnt - Oddcnt;
}

int main()
{
        int *p = NULL;
        int iSize = 0, iCnt = 0, iRet = 0;

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
        printf("diiference between frequency of even numbers and odd numbers :%d\n",iRet);       
        
        free(p);
        return 0;
}