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
//  Function Name:  Multiplication
//  Description:    To Perform Multiplication
//  Input:          Int,Int,Int
//  Output:         Int
//  Author:         Tushar Vikas Bhore
//  Date:           18/10/2025
//
/////////////////
////////////////////////
/////////////////////////////////////////////////

int Multiplication(int iNo1,int iNo2,int iNo3)
{
    int iAns=0;

    if(iNo1<0)
    {
        iNo1=-iNo1;
    }
    if(iNo2<0)
    {
        iNo2=-iNo2;
    }
    if(iNo3<0)
    {
        iNo3=-iNo3;
    }

    iAns=iNo1*iNo2*iNo3;

    return iAns;
}
int main()
{
    int iValue1=0,iValue2=0,iValue3=0;
    int iRet=0;

    printf("Please enter Three Numbers :\n");
    scanf(" %d%d%d",&iValue1,&iValue2,&iValue3);

    iRet=Multiplication(iValue1,iValue2,iValue3);

    printf("The Multiplication of the Number's is : %d \n",iRet);

    return 0;
}