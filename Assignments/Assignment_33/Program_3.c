#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL; 

BOOL CheckDigitOrNot ( char cChar )
{

    if( cChar >= '0' && cChar <= '9' )
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

    bRet = CheckDigitOrNot ( cCh );

    if( bRet == TRUE )
    {

        printf( "The entered character is digit which is %c.\n",cCh );

    }
    else
    {

        printf(" The entered character is not digit which is %c.\n",cCh);

    }

    return 0;

}