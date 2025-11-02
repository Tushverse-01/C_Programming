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
//  Function Name:  CalculateOddFactorial
//  Description:    To Calculate the Odd
//                  Factorial of Number.
//  Input:          Int
//  Output:         Int
//  Author:         Tushar Vikas Bhore
//  Date:           18/10/2025
//
/////////////////
////////////////////////
/////////////////////////////////////////////////

int CalculateOddFactorial(int iNo)
{
    
    int iOddFactorial=0;
    int iCnt=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=iNo,iOddFactorial=1;iCnt>=1;iCnt--)
    {
        if((iCnt%2)!=0)
        {
            iOddFactorial=iOddFactorial*iCnt;
        }
        
    }

    return iOddFactorial;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the Number : \t");
    scanf("%d",&iValue);

    iRet=CalculateOddFactorial(iValue);

    printf("The Odd Factorial of the Number %d  is : %d",iValue,iRet);


    return 0;
}