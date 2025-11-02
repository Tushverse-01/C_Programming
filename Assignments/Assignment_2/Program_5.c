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
//  Output:         even or odd
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
    int iValue=0;
    bool bRet=false;

    printf("Enter the Number : \n ");
    scanf("%d",&iValue);

    bRet=CheckEvenOdd(iValue);
    if(bRet==true)
    {
        printf("The Number %d is Even \n ",iValue );
    }
    else
    {
        printf("The Number %d is Odd \n ",iValue );
    }
    return 0;
}