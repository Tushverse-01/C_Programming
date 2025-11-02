#include<stdio.h>
int CalculateSumOfEvenNum(int iLimit)
{
    int iCnt=0;
    int iSumofEvenNum=0;

    for(iCnt=2;iCnt<=iLimit;iCnt+=2)
    {
        if((iCnt%2)==0)
        {
            iSumofEvenNum=iSumofEvenNum+iCnt;
        }
    }
    return iSumofEvenNum;
    
}
int main()
{
    int iLimit=0;

    printf("Enter the Natural Number : ");
    scanf("%d",&iLimit);

    printf("The Sum of Even numbers upto %d is: %d\t",iLimit,CalculateSumOfEvenNum(iLimit));


    return 0;
}