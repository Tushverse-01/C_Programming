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
//  Function Name:  DisplayNumberUptoFrequency
//  Description:    To Display Number upto Freq
//  Input:          Int,Int
//  Output:         Int
//  Author:         Tushar Vikas Bhore
//  Date:           17/10/2025
//
/////////////////
////////////////////////
/////////////////////////////////////////////////


void DisplayNumberUptoFrequency(int iNo,int iFrequency)
{

    int iCnt=0;
    if(iFrequency<0)
    {
        iFrequency=-iFrequency;
    }
    for(iCnt=1;iCnt<=iFrequency;iCnt++)
    {
    printf("%d \n",iNo);
    }
}
int main()
{
    int iValue=0;
    int iCount=0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    printf("Enter the Frequency : \n");
    scanf("%d",&iCount);

    DisplayNumberUptoFrequency(iValue,iCount);

    return 0;
}