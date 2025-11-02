#include<stdio.h>
int CountFrequencyOfTwos(int iNum)
{
    int iCountTwos=0;
    int iDigit=0;
    
    while(iNum!=0)
    {
        iDigit=iNum%10;
        if(iDigit==2)
        {
            iCountTwos++;
        }
        iNum=iNum/10;
    }
    return iCountTwos;
}
int main()
{
    int iNumber=0;
    int iFreqOfTwos=0;

    printf("Enter the Number :\n");
    scanf("%d",&iNumber);

    iFreqOfTwos=CountFrequencyOfTwos(iNumber);
    if(iFreqOfTwos>=1)
    {
        printf("There are %d Two's in the Number %d ",iFreqOfTwos,iNumber);
    }
    else
    {
        printf("There are 0 Two's in the Number %d ",iFreqOfTwos,iNumber);
    }
    

    return 0;
}