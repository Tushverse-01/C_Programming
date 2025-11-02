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
//  Function Name:  PrintEven
//  Description:    To Display Even Numbers
//  Input:          Int
//  Output:         even Numbers
//  Author:         Tushar Vikas Bhore
//  Date:           17/10/2025
//
/////////////////
////////////////////////
/////////////////////////////////////////////////

void PrintEven(int iNo)
{
    int iCnt=0;
    iNo=2*iNo;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=2;iCnt<=iNo;iCnt=iCnt+2)
    {
        printf("%d \t",iCnt);
    }

}
int main()
{

    int iValue=0;
    printf("Enter the Number : \n");
    scanf("%d",&iValue);
    PrintEven(iValue);

}