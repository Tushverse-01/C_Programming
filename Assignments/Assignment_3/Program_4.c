/////////////////////////////////////////////////
////////////
//
//  Required Header Files 
//
////////////
/////////////////////////////////////////////////
#include<stdio.h>
void ChangeCaseOfChar(char cChar)
{
    if(cChar>='a' && cChar<='z')
    {
        printf("%c",cChar-32);
    }

    if(cChar>='A' && cChar<='Z')
    {
        printf("%c",cChar+32);
    }
}
int main()
{
    char cValue='\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);


    ChangeCaseOfChar(cValue);
    

    return 0;
}