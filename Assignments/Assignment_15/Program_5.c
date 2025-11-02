#include<stdio.h>
int CalculateDiff(int iNum)
{
    int iDigit=0,iSumEvenDigits=0,iSumOddDigits=0;
    int iDiff=0;

    while(iNum!=0)
    {
        iDigit=iNum%10;
        if((iDigit%2)==0)
        {
            iSumEvenDigits=iSumEvenDigits+iDigit;
        }
        else
        {
            iSumOddDigits=iSumOddDigits+iDigit;
        }
        iNum=iNum/10;
    }

    iDiff=iSumEvenDigits-iSumOddDigits;

    return iDiff;

}
int main()
{
    int iNumber=0;
    int iDifference=0;

    printf("Enter the Number: \n");
    scanf("%d",&iNumber);

    iDifference=CalculateDiff(iNumber);

    printf("The Difference in Summation of even Digits and Summation of Odd digits is %d\n",iDifference);

    return 0;

}