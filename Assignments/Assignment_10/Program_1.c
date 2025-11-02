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
//  Function Name:  CalculateArea
//  Description:    To Calculate the Area of circle
//  Input:          Float
//  Output:         Double
//  Author:         Tushar Vikas Bhore
//  Date:           18/10/2025
//
/////////////////
////////////////////////
/////////////////////////////////////////////////

double CalculateArea(float fRadius)
{
    
    double dArea=0.0;
    const float fPi=3.14;

    dArea=fPi*fRadius*fRadius;

    return dArea;


}
int main()
{
    float fValue=0.0f;
    double dRet=0.0;

    printf("Enter the Radius of the Circle :\t");
    scanf("%f",&fValue);

    dRet=CalculateArea(fValue);

    printf("The Area of The circle is : %lf ",dRet);


    return 0;
}