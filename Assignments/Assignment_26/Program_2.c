#include<stdio.h>
void DisplayPattern(int iNum)
{
    int iCnt=0;
    iCnt=1;
    
    for(iCnt=(2*iNum); iCnt>=1; iCnt--)
    {
        if((iCnt%2) == 0)
        {
            printf("# \t");
        }
        else
        {
            printf("%d \t",iCnt);

        }
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