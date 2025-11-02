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
//  Function Name:  DisplayFiveMultiples
//  Description:    To Display Five multiples of Number 
//  Input:          Int
//  Output:         Int
//  Author:         Tushar Vikas Bhore
//  Date:           18/10/2025
//
/////////////////
////////////////////////
/////////////////////////////////////////////////

void DisplayFiveMultiples(int iNo)
{
    int iCnt=0;
    int iAns=0;
    for(iCnt=1,iAns=1;iCnt<=5;iCnt++)
    {
        iAns=iNo*iCnt;
        printf("%d \t",iAns);
    }

}
int main()
{
    int iValue=0;

    printf("Enter the Number : \t");
    scanf("%d",&iValue);

    DisplayFiveMultiples(iValue);

    return 0;
}