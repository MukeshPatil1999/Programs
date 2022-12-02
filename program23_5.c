/* Accept division of student from user and depends on the division
   display exam timing. there are 4 divisions in school as A, B, C, D.
   Exam of division A at 7 AM,B at 8:30 AM,C at 9:20 AM,
   D at 10:30 AM.(Application should be case insensetive) 

   Input : c
   Output : your exam at 9:20 AM
   Input : d
   Output : your exam at 10:30 AM
*/
#include<stdio.h>

void DisplaySchedule(char ChDiv)
{
     
     if((ChDiv =='a') || (ChDiv =='A'))
     {
          printf("Your exam at 7 AM \n");
     }
     else if ((ChDiv =='b') || (ChDiv =='B'))
     {
          printf("Your exam at 8:30 AM \n");
     }
     else if((ChDiv =='c') || (ChDiv =='C'))
     {
          printf("Your exam at 9:20 AM \n");
     }
     else if((ChDiv =='d') || (ChDiv =='D'))
     {
          printf("Your exam at 10:30 AM \n");
     }
     else
     {
          printf("There is No Division like %c in  our School\n",ChDiv);
     }

}

int main()
{
     char cValue = '\0';
     
     printf("enter your Division : \n");
     scanf("%c",&cValue);
     
     DisplaySchedule(cValue);
     
     return 0;
}