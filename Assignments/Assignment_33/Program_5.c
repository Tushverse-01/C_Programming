#include<stdio.h>

void DisplayDiv ( char cChar )
{
    switch (cChar) 
    {

        case  'A':
        case  'a':
        
        printf("Your exam at 7 AM. \n");
    break;
        
        case 'B':
        case 'b':
        
        printf("Your exam at 8:30 AM. \n");
    break;

        case 'C':
        case 'c':
        
        printf("Your exam at 9:20 AM. \n");
    break;

        case 'D':
        case 'd':
        
        printf("Your exam at 10:30 AM. \n");
    break;
    
        default:

        printf("You entered invalid division \n");
    break;

    }

}

int main()
{

    char cCh = '\0';

    printf("Enter your division : \t");
    scanf( "%c" ,&cCh );

    DisplayDiv(cCh);

    return 0;

}