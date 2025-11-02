#include<stdio.h>
int CountFreqOfFourInNum(int iNum)
{
    int iCountFours=0;
    int iDigit=0;

    while(iNum!=0)
    {
        iDigit=iNum%10;
        if(iDigit==4)
        {
            iCountFours++;
        }
        iNum=iNum/10;
    }
    return iCountFours;
}

int main()
{
    int iNumber=0;
    int iFreqOfFours=0;

    printf("Enter the Number : \t");
    scanf("%d",&iNumber);

    iFreqOfFours=CountFreqOfFourInNum(iNumber);
    if(iFreqOfFours>=1)
    {
        printf("There are %d Fours in the Number",iFreqOfFours);
    }
    else
    {
        printf("There are Zero Fours in the Number",iFreqOfFours);
    }
 

    return 0;
}