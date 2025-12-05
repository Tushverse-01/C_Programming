#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL; 

BOOL IsCapitalOrNot ( char cChar )
{

    if( cChar >= 'A' && cChar <= 'Z' )
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

    char cCh = '\0';
    BOOL bRet = 0;

    printf("Enter the character : \t");
    scanf( "%c" ,&cCh );

    bRet = IsCapitalOrNot (cCh);

    if( bRet == TRUE )
    {

        printf( "The entered character is capital which is %c.\n",cCh );

    }
    else
    {

        printf(" The entered character is not capital which is %c.\n",cCh);

    }

    return 0;

}