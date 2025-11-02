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
//  Function Name:  ConvertKmIntoM
//  Description:    To Convert from KM to M
//  Input:          Int
//  Output:         Int
//  Author:         Tushar Vikas Bhore
//  Date:           18/10/2025
//
/////////////////
////////////////////////
/////////////////////////////////////////////////

int ConvertKmIntoM(int iKm)
{
    int iMeter=0;

    iMeter=iKm*1000;

    return iMeter;

}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the Kilo Meters :\t");
    scanf("%d",&iValue);

    iRet=ConvertKmIntoM(iValue);

    printf("The kilometer %d is Converted in Meter as : %d ",iValue,iRet);

    return 0;
}