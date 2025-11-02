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
//  Function Name:  DisplayStars
//  Description:    To Display Pattern of Stars
//  Input:          Int
//  Output:         Pattern in *
//  Author:         Tushar Vikas Bhore
//  Date:           17/10/2025
//
/////////////////
////////////////////////
/////////////////////////////////////////////////


void DisplayStars(int iNo)
{
    int iCnt =0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    
    while(iCnt<iNo)
    {
        printf("* \n");
        iCnt++;
    }
}
int main()
{
    int iValue=0;

    printf("Enter the Number: ");
    scanf("%d",&iValue);

    DisplayStars(iValue);

    return 0;
}