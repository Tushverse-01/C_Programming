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
//  Function Name:  CheckDivisibleByFive
//  Description:    It is used to Check divisible 
//                  by five or not
//  Input:          Int
//  Output:         States Divisible by five or Not
//  Author:         Tushar Vikas Bhore
//  Date:           17/10/2025
//
/////////////////
////////////////////////
/////////////////////////////////////////////////


bool CheckDivisibleByFive(int iNo)
{

    if((iNo%5)==0)
    {
        return true;
    }
    {
        return false;
    }

}

int main()
{
    int iValue=0;

    bool bRet=false;
    printf("Enter the Number : ");
    scanf("%d",&iValue);
    bRet=CheckDivisibleByFive(iValue);
    if(bRet==true)
    {
        printf(" Divisible by 5 \n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }

    return 0;
}       //  End of Main Function