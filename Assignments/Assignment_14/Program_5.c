#include<stdio.h>
int iCountFreqOfDigitsLessThanSixOfNum(int iNum)
{
    int iFreq=0;
    int iDigit=0;

    while(iNum!=0)
    {
        iDigit=iNum%10;
        if(iDigit<6)
        {
            iFreq++;
        }
        iNum=iNum/10;

    }

    return iFreq;
}
int main()
{
    int iNumber=0;
    int iRet=0;

    printf("Enter the Number : \t");
    scanf("%d",&iNumber);

    iRet=iCountFreqOfDigitsLessThanSixOfNum(iNumber);

    if(iRet>=1)
    {
        printf("There are %d digits Less then Six in this Number \n",iRet);
    }
    else
    {
        printf("There is no digit Less then Six in this Number \n");
    }

    return 0;
}