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
//  Function Name:  DisplayReverseTable
//  Description:    To Display the Table in Reverse
//  Input:          Int
//  Output:         Int
//  Author:         Tushar Vikas Bhore
//  Date:           18/10/2025
//
/////////////////
////////////////////////
/////////////////////////////////////////////////

void DisplayReverseTable(int iNo)
{
    int iCnt=0;
    int iAns=0;

        iCnt=10;
        iAns=1;
        
    while(iCnt>=1)
    {
        iAns=iNo*iCnt;
        printf("%d\t",iAns);
        iCnt--;
    }
}
int main()
{
    int iValue=0;

    printf("Enter the Number : \t");
    scanf("%d",&iValue);

    DisplayReverseTable(iValue);

    return 0;
}