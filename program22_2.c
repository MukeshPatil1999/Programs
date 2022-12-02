/* Accept number of rows and number of column from user and 
   display below pattern.
   
   Input : iRow = 4  iCol = 4
   
   Output :  * * * *
             * * * #
             * * # #
             * # # #
*/
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
        int i = 0, j = 0;
        
        for (i = 1; i <=iRow; i++)
        {
                
                for(j = 1; j <= iCol; j++)
                {
                        if (j+i >= 6)
                        {
                                printf("#\t");
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
