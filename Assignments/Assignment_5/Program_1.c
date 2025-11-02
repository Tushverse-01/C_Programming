/////////////////////////////////////////////////
////////////
//
//  Required Header Files 
//
////////////
/////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////
////////////////////////
/////////////////
//
//  Function Name:  CheckEvenOdd
//  Description:    To Check Number is Even or odd
//  Input:          Int
//  Output:         Even/Odd
//  Author:         Tushar Vikas Bhore
//  Date:           17/10/2025
//
/////////////////
////////////////////////
/////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    if((iNo%2)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
int main()
{
    int iNum=0;
    bool bRet=false;

    printf("Enter the number to check is it Even or Odd : \t");
    scanf("%d",&iNum);

    bRet=CheckEvenOdd(iNum);

    if(bRet==true)
    {
        printf("The Number is Even \n ");

    }
    else
    {
        printf("The Number is Odd \n ");
    }

    return 0;
}