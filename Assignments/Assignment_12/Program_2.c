#include<stdio.h>
int Count_Factors(int iNumber)
{
    int iCnt=0;
    int iTotlFacts=0;

     if(iNumber<0)
    {
        iNumber=-iNumber;
    }

    for(iCnt=1;iCnt<=(iNumber/2);iCnt++)
    {
        if((iNumber%iCnt)==0)
        {
            iTotlFacts++;
        }
    }
    return iTotlFacts;

}
int main()
{
    int iNum=0;

    printf("Enter the Number : \n");
    scanf("%d",&iNum);

    printf("There are %d Factors of Number %d. \n",Count_Factors(iNum),iNum);

    return 0;
}