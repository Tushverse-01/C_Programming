#include<stdio.h>
int CountFreqOfOddDigitsInNum(int iNum)
{
    int iDigit=0;
    int iFreqOfOdd=0;

    while(iNum!=0)
    {
        iDigit=iNum%10;
        if((iDigit%2)!=0)
        {
            iFreqOfOdd++;
        }
        iNum=iNum/10;
    }

    return iFreqOfOdd;
}
int main()
{
    int iNumber=0;
    int iRet=0;

    printf("Enter the Number :\n");
    scanf("%d",&iNumber);

    iRet=CountFreqOfOddDigitsInNum(iNumber);
    
    if(iRet>=1)
    {
        printf("There are %d Odd Digits in the Number.\n",iRet);
    }
    else
    {
        printf("There is no Odd Digit in the Number.\n");
    }

}