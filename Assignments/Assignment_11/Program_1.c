#include<stdio.h>
void DisplayNumbersInRange(int iStart,int iEnd)
{
    int iCnt=0;
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {

        printf("%d\t",iCnt);

    }


}
int main()
{
    int iRange1=0,iRange2=0;
    
    printf("Enter the Starting number:\n");
    scanf("%d",&iRange1);

    printf("Enter the Last number:\n");
    scanf("%d",&iRange2);

    DisplayNumbersInRange(iRange1,iRange2);


    return 0;
}
