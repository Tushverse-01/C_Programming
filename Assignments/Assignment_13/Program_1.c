#include<stdio.h>
void DisplayUptoNum(int iLimit)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iLimit;iCnt++)
    {
        printf("%d \t",iCnt);
    }
}
int main()
{
    int iLimit=0;

    printf("Enter Number :\t");
    scanf("%d",&iLimit);

    DisplayUptoNum(iLimit);

    return 0;
}