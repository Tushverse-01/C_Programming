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
//  Function Name:  CalculateDiffInEvenOddFactorial
//  Description:    To Calculate the Difference in Odd
//                  And even Factorial of Number.
//  Input:          Int
//  Output:         Int
//  Author:         Tushar Vikas Bhore
//  Date:           18/10/2025
//
/////////////////
////////////////////////
/////////////////////////////////////////////////

int CalculateDiffInEvenOddFactorial(int iNo)
{
    int iDiffInEvenOddFact=0;
    int iEvenFactorial=0;
    int iOddFactorial=0;
    int iCnt=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=iNo,iEvenFactorial=1,iOddFactorial=1;iCnt>=1;iCnt--)
    
    {
    
        if((iCnt%2)==0)
        {
            iEvenFactorial=iEvenFactorial*iCnt;
        }
        else
        {
            iOddFactorial=iOddFactorial*iCnt;
        }
    
    }

    iDiffInEvenOddFact=iEvenFactorial-iOddFactorial;
    
    return iDiffInEvenOddFact;

}
int main()
{
    int iNumber=0;
    int iRet=0;

    printf("Enter the Number :\t ");
    scanf("%d",&iNumber);

    iRet=CalculateDiffInEvenOddFactorial(iNumber);

    printf("The Diiference Between even odd Factorial is : %d \n ",iRet);

    return 0;
}