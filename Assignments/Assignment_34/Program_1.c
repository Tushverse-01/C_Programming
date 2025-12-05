#include<stdio.h>

void DisplayAscii()
{
    int i=0;

    for( i=0; i <= 127;  i++)
    {
        
        printf("%d \t %c\n" ,i ,(char)i );
       
    }

}

int main()

{

    DisplayAscii();

    return 0;
}