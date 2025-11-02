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
//  Function Name:  DisplayEvenFactors
//  Description:    To Display Even Factors
//  Input:          Int
//  Output:         even Factors
//  Author:         Tushar Vikas Bhore
//  Date:           17/10/2025
//
/////////////////
////////////////////////
/////////////////////////////////////////////////

void DisplayEvenFactors(int iNo)
{
    int iCnt=0;
    if(iNo<=0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo%iCnt)==0  && (iCnt%2)==0) 
        {
            
            printf("%d \t",iCnt);
            
        }
    }
}
int main()
{
    int iValue=0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    DisplayEvenFactors(iValue);

    return 0;
}