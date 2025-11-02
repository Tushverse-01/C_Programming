
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
//  Function Name:  Division
//  Description:    It is used to perform Division
//  Input:          Int,Int
//  Output:         Int
//  Author:         Tushar Vikas Bhore
//  Date:           17/10/2025
//
/////////////////
////////////////////////
/////////////////////////////////////////////////

int Divide  (
                int iNo1,            //  First Input
                int iNo2             //  Second Input
            )
{
    int iAns=0;                      //  To Store the Result

    if(iNo1<0)                       //  Updater
    {
        iNo1=-iNo1;
    }

    if(iNo2<0)                       //  Updater
    {
        iNo2=-iNo2;
    }

    iAns=iNo1/iNo2;                  // Business Logic 

    return iAns;                     // Return Value

}   //   End of Divide

///////////////////////////////////////////////////////
/////////////////////////
//
//  Entry point Function for Application
//
/////////////////////////
///////////////////////////////////////////////////////

int main()
{
    int iValue1=15,iValue2=5;           //  To Accept User Input
    int iRet=0;                         //  To Store the Result
    
    iRet=Divide(iValue1,iValue2);       //  Method call

    printf("Division is : %d \n",iRet);

    return 0;

}    //  End of Main Function

////////////////////////////////////////////////////////////////
//
//  Testcases successfully Handaled by the Application
//
//  Input1:15        Input2:5         Output:3
//
////////////////////////////////////////////////////////////////