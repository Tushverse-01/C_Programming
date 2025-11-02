/////////////////////////////////////////////////
////////////
//
//  Required Header Files 
//
////////////
/////////////////////////////////////////////////


#include<stdio.h>

/////////////////////////////////////////////////
////////////////////////
/////////////////
//
//  Function Name:  DisplayDigitInWord
//  Description:    To convert digit To word
//  Input:          Int
//  Output:         String
//  Author:         Tushar Vikas Bhore
//  Date:           18/10/2025
//
/////////////////
////////////////////////
/////////////////////////////////////////////////

void DisplayDigitInWord(int iDigit)
{
    if(iDigit<0)
    {
        printf("Invalid Number \n");
    }
     if(iDigit>9)
    {
        printf("Invalid Number \n");
    }
    
    switch(iDigit)
    {

        case 0:
            printf("Zero \n");
            break;
        case 1:
            printf("One \n");
            break;
        case 2:
            printf("Two \n");
            break;
         case 3:
            printf("Three \n");
            break;
         case 4:
            printf("Four \n");
            break;
         case 5:
            printf("Five \n");
            break;
         case 6:
            printf("Six \n");
            break;
         case 7:
            printf("Seven \n");
            break;
         case 8:
            printf("Eight \n");
            break;
         case 9:
            printf("Nine \n");
            break;
        
    }

}

int main()
{
    int iValue=0;

    printf("Enter the Digit of Number \t");
    scanf("%d",&iValue);

   
    DisplayDigitInWord(iValue);

    return 0;
}