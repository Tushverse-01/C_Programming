#include<stdio.h>
int CalculateEvenDigitsInNum(int iNum)
{
    int iDigit=0;
    int iCountEvenDigits=0;

    while(iNum!=0)
    {
        iDigit=iNum%10;
        if((iDigit%2)==0)
        {
            iCountEvenDigits++;
        }
        iNum=iNum/10;
    }
    return iCountEvenDigits;

}
int main()
{
    int iNumber=0;
    int iRet=0;

    printf("Enter the Number : \n");
    scanf("%d",&iNumber);

    iRet=CalculateEvenDigitsInNum(iNumber);

    if(iRet>=1)
    {
        printf("There are %d Even Digits in the number. \n",iRet);
    }
    else
    {
        printf("There is No Even Digit in the number. \n");
    }

    return 0;
}