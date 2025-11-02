#include<stdio.h>
void DisplayOddNumbers(int iEndLimit)
{
    int iCnt=0;

    if(iEndLimit<0)
    {
        iEndLimit=-iEndLimit;
    }
    for(iCnt=1;iCnt<=iEndLimit;iCnt+=2)
    {
        if((iCnt%2)!=0)
        {
            printf("%d \t",iCnt);
        }

    }
}
int main()
{
    int iLimit=0;

    printf("Enter the Number : \n");
    scanf("%d",&iLimit);

    DisplayOddNumbers(iLimit);

    return 0;
}