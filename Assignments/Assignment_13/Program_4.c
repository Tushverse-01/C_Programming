#include<stdio.h>
int CalculateSumOfNaturalNum(int iLimit)
{
    int iCnt=0;
    int iSumofNatNum=0;
    if(iLimit<=0)
    {
        printf("Invalid Number\n");
    }

    for(iCnt=1;iCnt<=iLimit;iCnt++)
    {

        iSumofNatNum=iSumofNatNum+iCnt;

    }
    return iSumofNatNum;
}
int main()
{
    int iLimit=0;

    printf("Enter the Natural Number : ");
    scanf("%d",&iLimit);

    printf("The Sum of Natural numbers upto %d is: %d\t",iLimit,CalculateSumOfNaturalNum(iLimit));

    return 0;
}