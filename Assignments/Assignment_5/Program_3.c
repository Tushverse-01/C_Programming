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
//  Function Name:  CheckLeapOrNot
//  Description:    To Check Year is Leap or Not
//  Input:          Int
//  Output:         Leap or not
//  Author:         Tushar Vikas Bhore
//  Date:           17/10/2025
//
/////////////////
////////////////////////
/////////////////////////////////////////////////

bool CheckLeapOrNot(int iYr)
{

    if((iYr%4)==0)
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
    int iYear=0;
    bool bRet=false;

    printf("Enter the Year To check is it Leap or Not : \t");
    scanf("%d",&iYear);

    bRet=CheckLeapOrNot(iYear);

    if(bRet==true)
    {
        printf("The year %d is Leap year. \n",iYear);
    }
    else
    {
        printf("The year %d is Not a Leap year. \n",iYear);
    }

    return 0;
}