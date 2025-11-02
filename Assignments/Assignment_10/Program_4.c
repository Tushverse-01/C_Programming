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
//  Function Name:  ConvertFhIntoCs
//  Description:    To Convert from fh to cs(temperature)
//  Input:          Float
//  Output:         Double
//  Author:         Tushar Vikas Bhore
//  Date:           18/10/2025
//
/////////////////
////////////////////////
/////////////////////////////////////////////////

double ConvertFhIntoCs(float fTemp)
{
    double dCelsius=0.0;

    dCelsius=((fTemp-32)*(5.0/9.0));

    return dCelsius;

}
int main()
{
    float fValue=0.0f;
    double dRet=0.0;

    printf("Enter the Tempreture in Fahrenheit :\t");
    scanf("%f",&fValue);

    dRet=ConvertFhIntoCs(fValue);

    printf("The Tempreture in Celsius : %lf",dRet);


    return 0;
}