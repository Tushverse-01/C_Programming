#include<stdio.h>
typedef int BOOL ;
#define TRUE 1
#define FALSE 0
BOOL CheckVowelOrNot(char cCharacter)
{
    if( cCharacter =='a' || cCharacter=='e' || cCharacter=='i' || cCharacter=='o' || cCharacter=='u' )
    {
        return TRUE;
    }
    if( cCharacter=='A' || cCharacter=='E' || cCharacter=='I' || cCharacter=='O' || cCharacter=='U' )
    {
        return TRUE;
    }

    

}
int main()
{
    char cValue='/0';
    BOOL bRet = FALSE;

    printf("Enter the Character : \t ");
    scanf("%c",&cValue);


    bRet=CheckVowelOrNot(cValue);

    if(bRet==TRUE)
    {
        printf("The Enterd character is vowel. \n ");
    }
    else
    {
        printf("The Enterd character is not vowel. \n ");

    }

    return 0;
}