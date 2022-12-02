// Accept one character from user and check whether that character is vowel (a, e, i, o, u) or not.
// Input : e  Output : True
// Input : d  Output : False

#include<stdio.h>
//typedef int bool;
//#define true 1
//#define false 0
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL ChkVowel(char cLetter)
{
    //char A = 'a';
    //char B = 'e';
    //char C = 'i';
    //char D = 'o';
    //char E = 'u';
    if ((cLetter == 'a') || (cLetter == 'e') || (cLetter == 'i') || (cLetter == 'o') || (cLetter == 'u'))
    {
        
        return TRUE;
    }
    else 
    {
        return FALSE;
      
    }

}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    printf("enter your characteristics : \n");
    scanf("%c",&cValue);

    
    bRet = ChkVowel(cValue);
    if (bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
       printf("It is not Vowel");
    }
    return 0;
}
