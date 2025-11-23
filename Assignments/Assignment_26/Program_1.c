#include<stdio.h>
void DisplayPattern(int iNum)
{
    int iCnt=0;
    char cCh='A';
    
    for(iCnt=1; iCnt<=iNum; iCnt++)
    {
        printf("%c \t",cCh);
        cCh++;
    }


}
int main()
{
    int iValue=0;

    printf("Enter the number : \t");
    scanf("%d",&iValue);

    DisplayPattern(iValue);


    return 0;
}