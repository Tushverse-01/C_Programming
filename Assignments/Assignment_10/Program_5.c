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
//  Function Name:  ConvertSqFToSqM
//  Description:    To Convert from Sq Feet to Sq Meter
//  Input:          Int
//  Output:         Double
//  Author:         Tushar Vikas Bhore
//  Date:           18/10/2025
//
/////////////////
////////////////////////
/////////////////////////////////////////////////

double ConvertSqFToSqM(int iSqFeet)
{
    double dSqMeter=0;
    double dVal=0.0;
        dVal=0.0929;
    
    dSqMeter=(iSqFeet)*(dVal);

    return dSqMeter;

}
int main()
{
    int iValue=0;
    double dRet=0.0;

    printf("Enter the area in Square feet :\t ");
    scanf("%d",&iValue);

    dRet=ConvertSqFToSqM(iValue);

    printf("The Area in Square meter is : %lf",dRet);


    return 0;
}