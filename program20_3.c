/* Accept number of rows and number of column from user and 
   display below pattern.
   
   Input : iRow = 3  iCol = 5
   
   Output : A A A A A
            B B B B B
            C C C C C
            
*/
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
        int i = 0, j = 0;
        char Ch = 'A';
        

        for (i = 1; i <= iRow; i++)
        {
                for(j = 1; j <= iCol; j++)
                {
                    printf("%c\t",Ch);    
                }
                Ch++;
                
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
