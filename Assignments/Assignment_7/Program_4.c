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
//  Function Name:  DisplayOddUptoNum
//  Description:    To Display Odd numbers upto Number 
//  Input:          Int
//  Output:         Int
//  Author:         Tushar Vikas Bhore
//  Date:           18/10/2025
//
/////////////////
////////////////////////
/////////////////////////////////////////////////

void DisplayOddUptoNum(int iNo)
{
    int iCnt=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iCnt%2)!=0)
        {
            printf("%d \t",iCnt);
        }
    }

}
int main()
{
    int iValue=0;

    printf("Enter the Number : \t");
    scanf("%d",&iValue);

    DisplayOddUptoNum(iValue);

    return 0;
}