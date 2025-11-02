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
//  Function Name:  DisplayTable
//  Description:    To Display the Table of Number
//  Input:          Int
//  Output:         Int
//  Author:         Tushar Vikas Bhore
//  Date:           18/10/2025
//
/////////////////
////////////////////////
/////////////////////////////////////////////////

void DisplayTable(int iNo)
{
    int iCnt=0;
    int iAns=0;

    for(iCnt=1,iAns=1;iCnt<=10;iCnt++)
    {
        iAns=iNo*iCnt;
        printf("%d \t",iAns);
    }
}
int main()
{
    int iValue=0;

    printf("Enter to Number to get it's Table : \t");
    scanf("%d",&iValue);

    DisplayTable(iValue);

    return 0;
}