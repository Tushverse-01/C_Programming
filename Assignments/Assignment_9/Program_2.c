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
//  Function Name:  ConvertDollerToInt
//  Description:    To Convert the currency
//                  From $  to INR
//  Input:          Int
//  Output:         Int
//  Author:         Tushar Vikas Bhore
//  Date:           18/10/2025
//
/////////////////
////////////////////////
/////////////////////////////////////////////////

int ConvertDollerToInt(int iCurrency)
{
    if(iCurrency<0)
    {
        iCurrency=-iCurrency;
    }

    int iInr=0;

    iInr=iCurrency*70;

    return iInr;

}
int main()
{

    int iUsCurr=0;
    int iRet=0;

    printf("Enter the Number US currency($) :\t");
    scanf("%d",&iUsCurr);

    iRet=ConvertDollerToInt(iUsCurr);

    printf("Value in INR is : %d (Rs)",iRet);

    return 0;
}