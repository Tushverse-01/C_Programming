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
//  Function Name:  CalculateAreaOfRectangle
//  Description:    To Calculate the Area of Rectangle
//  Input:          Float,Float
//  Output:         Double
//  Author:         Tushar Vikas Bhore
//  Date:           18/10/2025
//
/////////////////
////////////////////////
/////////////////////////////////////////////////

double CalculateAreaOfRectangle(float fWidth,float fHeight)
{
    double dArea=0.0;

    dArea=fWidth*fHeight;

    return dArea;

}
int main()
{
    float fValue1=0.0f,fValue2=0.0f;
    double dRet=0.0;

    printf("Enter the Width of Rectangle :\t");
    scanf("%f",&fValue1);

    printf("Enter the Height of Rectangle :\t");
    scanf("%f",&fValue2);


    dRet=CalculateAreaOfRectangle(fValue1,fValue2);

    printf("The Area of Rectangle is : %lf ",dRet);


    return 0;
}