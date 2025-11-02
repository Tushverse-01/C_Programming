#include<stdio.h>
int DigitsLessThansevenMorethanThree(int iNum)
{
    int iDigit=0;
    int iFreq=0;

    while(iNum!=0)
    {
        iDigit=iNum%10;
        if(iDigit>3 && iDigit<7)
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

    printf("Enter the Number :\n");
    scanf("%d",&iNumber);

    iRet=DigitsLessThansevenMorethanThree(iNumber);
    
    if(iRet>=1)
    {
        printf("There are %d  Digits which are less then 7 and more than 3 in this Number.\n",iRet);
    }
    else
    {
        printf("There are no Digit which is less then 7 and more than 3 in this Number.\n",iRet);
    }

}