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
//  Function Name:  DisplayEitherHelloOrDemo
//  Description:    To Display Either Hello or demo
//  Input:          Int
//  Output:         String
//  Author:         Tushar Vikas Bhore
//  Date:           17/10/2025
//
/////////////////
////////////////////////
/////////////////////////////////////////////////

void DisplayEitherHelloOrDemo(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }

    if(iNo<10)
    {
        printf("Hello \n");
    }
    else
    {
        printf("Demo \n");
    }
}
int main()
{
    int iValue=0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    DisplayEitherHelloOrDemo(iValue);
    
    return 0;
}