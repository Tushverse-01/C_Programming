#include<stdio.h>
void DisplayDigitsOfNum(int iNum)
{
    int iDigit=0;

    while(iNum!=0)
    {
        iDigit=iNum%10;
        printf("%d",iDigit);
        iNum=iNum/10;
    }
}
int main()
{
    int iValue=0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    DisplayDigitsOfNum(iValue);
    
    return 0;
}