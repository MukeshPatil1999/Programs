/* Accept number of rows and number of column from user and 
   display below pattern.
   
   Input : iRow = 6 iCol = 5
   
   Output :  1 2 3 4
             1 * * 4
             1 * * 4
             1 2 3 4

*/
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
        int i = 0, j = 0;
        
        for (i = 1; i <=iRow; i++)
        {
                
                for(j = 1; j <= iCol; j++)
                {
                   if(i == 1)
                   {
                        printf("%d\t",j);
                   }
                   else if (j == 1)
                   {
                        printf("%d\t",j);
                   }
                   else if (j == iCol)
                   {
                        printf("%d\t",iCol);
                   }
                   else if (i == iRow)
                   {
                        printf("%d\t",j);
                   }
                   else
                   {
                        printf("*\t");
                   }
                }

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
