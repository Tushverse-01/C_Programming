#include<stdio.h>
int Calculate_SumofEvenFactors(int iNumber)
{
    int iCnt=0;
    int iSumOfEvenFacts=0;

     if(iNumber<0)
    {
        iNumber=-iNumber;
    }

    for(iCnt=1;iCnt<=(iNumber/2);iCnt++)
    {
        if((iNumber%iCnt)==0 && ((iCnt%2)==0))
        {
           iSumOfEvenFacts=iSumOfEvenFacts+iCnt;
        }
    }
    
    return iSumOfEvenFacts;

}

int main()
{
    int iNum=0;

    printf("Enter the Number : \n");
    scanf("%d",&iNum);

    printf("The Sum of all Even Factors of the Number %d is :\t %d",iNum,Calculate_SumofEvenFactors(iNum));



    return 0;
}