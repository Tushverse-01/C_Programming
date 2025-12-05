#include<stdio.h>

char ChangeCaseOfChar(char cChar)
{
  

    if( cChar >= 'A' && cChar <= 'Z')
    {
        cChar+=32;
    }
    else if( cChar >= 'a' && cChar <= 'z' )
    {
        cChar-=32;
    }


   return cChar;

}

int main()
{
    char cCh = '\0',cRet = '\0' ;

    printf("Enter the character to change its case : \t");
    scanf("%c",&cCh);

    cRet = ChangeCaseOfChar(cCh);

    printf("The changed case of character is %c. \n",cRet);

    return 0;

}