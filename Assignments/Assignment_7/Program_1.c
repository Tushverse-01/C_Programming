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
//  Function Name:  DisplayPattern
//  Description:    To Display Pattern
//  Input:          Int
//  Output:         Pattern
//  Author:         Tushar Vikas Bhore
//  Date:           18/10/2025
//
/////////////////
////////////////////////
/////////////////////////////////////////////////

void DisplayPattern(int iNo)
{
    int iCnt=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("$ \t * \t");
    }
}
int main()
{
    int iValue=0;

    printf("Enter the number :\t");
    scanf("%d",&iValue);

    DisplayPattern(iValue);

    return 0;
}