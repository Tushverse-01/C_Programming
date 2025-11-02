#include<stdio.h>
void DisplayFactors(int iNum)
{
    int iCnt=0;

    if(iNum<0)
    {
        iNum=-iNum;
    }

    for(iCnt=1;iCnt<=(iNum/2);iCnt++)
    {
        if((iNum%iCnt)==0)
        {
            printf("%d \t",iCnt);
        }
    }

}
int main()
{
    int iNumber=0;

    printf("Enter the Number :\n");
    scanf("%d",&iNumber);

    DisplayFactors(iNumber);


    return 0;
}