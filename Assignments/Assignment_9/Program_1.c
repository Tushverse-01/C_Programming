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
//  Description:    To Display the Pattern of(*) & (#)
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
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*");
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("#");
    }

}
int main()
{
    int iValue=0;

    printf("Enter the Number : \t");
    scanf("%d",&iValue);

    DisplayPattern(iValue);

    return 0;
}