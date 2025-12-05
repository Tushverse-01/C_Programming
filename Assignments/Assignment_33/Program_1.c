#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL; 

BOOL IsAlphabetOrNot( char cChar )
{

    if( cChar >= 'A' && cChar <= 'Z' )
    {
        return TRUE;
    }
    
    if( cChar >= 'a' && cChar <= 'z')
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

    bRet = IsAlphabetOrNot (cCh);

    if( bRet == TRUE )
    {

        printf( "The entered character is alphabet which is %c.\n",cCh );

    }
    else
    {

        printf(" The entered character is not alphabet which is %c.\n",cCh);

    }

    return 0;

}