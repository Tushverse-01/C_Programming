#include<stdio.h>
int Calculate_Sum(int iNumber)
{
    int iCnt=0;
    int iSumOfTotlFacts=0;

     if(iNumber<0)
    {
        iNumber=-iNumber;
    }

    for(iCnt=1;iCnt<=(iNumber/2);iCnt++)
    {
        if((iNumber%iCnt)==0)
        {
           iSumOfTotlFacts=iSumOfTotlFacts+iCnt;
        }
    }
    
    return iSumOfTotlFacts;

}
int main()
{
    int iNum=0;

    printf("Enter the Number : \n");
    scanf("%d",&iNum);

    printf("The Sum of All Factors of Number is %d\n",Calculate_Sum(iNum));

    return 0;
}