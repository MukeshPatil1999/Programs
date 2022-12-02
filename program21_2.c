/* Accept number of rows and number of column from user and 
   display below pattern.
   
   Input : iRow = 4  iCol = 4
   
   Output : 2 4 6 8 10
            1 3 5 7 9
            2 4 6 8 10
            1 3 5 7 9
*/
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
        int i = 0, j = 0, iCnt1 = 2, iCnt2 = 1;
        
        for (i = 1; i <=iRow; i++)
        {
                for(j = 1; j <= iCol; j++)
                {
                    if(i%2 != 0)
                    {
                        printf("%d\t",iCnt1);
                        iCnt1 = iCnt1 + 2;
                    }
                    else
                    {
                        printf("%d\t",iCnt2);
                        iCnt2 = iCnt2 + 2;
                    } 
                    
                }
                iCnt1 = 2;
                iCnt2 = 1; 
                printf("\n");
        }
}

int main()
{
        int iValue1 = 0, iValue2 = 0;
        printf("Enter number of Rows : \n");
        scanf("%d",&iValue1);

        printf("Enter number of Column : \n");
        scanf("%d",&iValue2);
        Pattern(iValue1,iValue2);
        return 0;

}
