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
//  Function Name:  CheckNumberType
//  Description:    To Check Number is Positive or Negative
//  Input:          Int
//  Output:         Positive/Negative
//  Author:         Tushar Vikas Bhore
//  Date:           17/10/2025
//
/////////////////
////////////////////////
/////////////////////////////////////////////////

void CheckNumberType(int iNum)
{
    if(iNum>0)
    {
        printf("The Number is Positive ");
    }
    else if(iNum<0)
    {
        printf("The Number is Negative");
    }
    else
    {
        printf("The Number is Zero");
    }
}
int main()
{
    int iNumber=0;

    printf("Enter the Number : \t");
    scanf("%d",&iNumber);

    CheckNumberType(iNumber);


    return 0;
}