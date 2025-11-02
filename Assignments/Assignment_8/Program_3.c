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
//  Function Name:  CalculateFactorial
//  Description:    To Calculate the Factorial
//  Input:          Int
//  Output:         Int
//  Author:         Tushar Vikas Bhore
//  Date:           18/10/2025
//
/////////////////
////////////////////////
/////////////////////////////////////////////////

int CalculateFactorial(int iNo)
{
    
    int iCnt=0;
    int iAns=0;
    
    if(iNo<0)
    {
        iNo=-iNo;
    }
        
        iCnt=1;
        iAns=1;

    while(iCnt<=iNo)
    {
        iAns=iAns*iCnt;
        iCnt++;
    }

    return iAns;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the Number : \t");
    scanf("%d",&iValue);

    iRet=CalculateFactorial(iValue);

    printf("The factorial of Number %d is : %d \n",iValue,iRet);

    return 0;
}