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
//  Function Name:  CheckGreaterOrNotBy100
//  Description:    To Check Num greater or not by 100
//  Input:          Int
//  Output:         Greater or not (By 100)
//  Author:         Tushar Vikas Bhore
//  Date:           18/10/2025
//
/////////////////
////////////////////////
/////////////////////////////////////////////////

bool CheckGreaterOrNotBy100(int iNo)
{
    if(iNo>100)
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
    int iValue=0;
    bool bRet=false;

    printf("Enter the Number : \t");
    scanf("%d",&iValue);

    bRet=CheckGreaterOrNotBy100(iValue);

    if(bRet==true)
    {
        printf("The Number  %d is greater than 100 ",iValue);

    }
    else
    {
        printf("The Number  %d is Smaller than 100 ",iValue);
    }

    return 0;
}