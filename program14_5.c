/* Accept N numbers from user and display all such elements
which Multiples of 11.
   Multiples of 11 mhanje 11 cha table madhe yenare(11 ne bhag janare)
   Input : N :6
           Elements : 85 66 3 55 93 88
   output : 15  

*/
#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iLength)
{
        int iCnt = 0, iEven = 0, iOdd = 0;
        printf("elements which are Multiples of 11 are : ");
        for(iCnt=0; iCnt < iLength; iCnt++)
        {
                if ((Arr[iCnt] % 11 == 0))
                {
                        printf("%d\t",Arr[iCnt]);
                }
                
        }
}

int main()
{
        int iSize = 0, iCnt = 0 ;
        int *p = NULL;

        printf("enter number of elements: \n");
        scanf("%d",&iSize);

        p = (int*)malloc(iSize * sizeof(int));
        if(p == NULL)
        {
                printf("unable to allocate memory");
                return -1;
        }
        printf("enter %d elements :\n",iSize);
        for(iCnt = 0; iCnt<iSize; iCnt++)
        {
                scanf("%d",&p[iCnt]);
        }
        Display(p,iSize);
    
        return 0;
}