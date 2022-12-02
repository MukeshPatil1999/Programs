/* Accept N numbers from user and return and display all such numbers which contains 3 digits in it.
   
   Input : N :6
           Elements : 8225 666 3 953 858 
   output :665 953 858
   
   
*/
#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
        int iCnt = 0; 
        int iMin = Arr[0];
        int Max = Arr[0];
        int iDigit = 0, iDigitCnt = 0;
        printf("number which contains 3 digits in it : \n");
        for (iCnt = 0; iCnt <iLength; iCnt++)
        {
                while (Arr[iCnt]!=0)
                {
                        iDigit = Arr[iCnt]%10;
                        
                        Arr[iCnt]= Arr[iCnt]/10;
                        iDigitCnt++;
                        
                }
                if (iDigitCnt > 2)
                {
                        printf("%d\t",Arr[iCnt]);
                }

                
          }
        
}

int main()
{
        int *p = NULL;
        int iSize = 0, iCnt = 0;
        
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
        
        Digits(p,iSize);
        
        
        free(p);
        return 0;
}