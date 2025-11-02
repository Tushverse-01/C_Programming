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
//  Function Name:  CalculateEvenFactorial
//  Description:    To Calculate the Even
//                  Factorial of Number.
//  Input:          Int
//  Output:         Int
//  Author:         Tushar Vikas Bhore
//  Date:           18/10/2025
//
/////////////////
////////////////////////
/////////////////////////////////////////////////

int CalculateEvenFactorial(int iNo)
{
    
    int iEvenFactorial=0;
    int iCnt=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    iCnt=iNo;
    iEvenFactorial=1;

    while(iCnt>=1)
    {
        if((iCnt%2)==0)
        {
            iEvenFactorial=iEvenFactorial*iCnt;
        }
        iCnt--;
    }

    return iEvenFactorial;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the Number : \t");
    scanf("%d",&iValue);

    iRet=CalculateEvenFactorial(iValue);

    printf("The Even Factorial of the Number %d  is : %d",iValue,iRet);


    return 0;
}