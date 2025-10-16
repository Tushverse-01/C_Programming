/*
    START
        Accept number and store as no
        Divide  no by 2
        if the remainder is 0 
            then Display as even
        otherwise 
            Display the number is odd
    STOP



*/

#include<stdio.h>
void CheckEvenOdd(int iNo)
{
    int iRem=0;
    iRem=iNo%2;
    if(iRem==0)
    {
        Printf("It is Even number \n");
    }
    else
    {
        Printf("It is Odd number \n");
    }
}
int main()
{
    int iValue=0;
    printf("Enter the Number : \n");
    scanf("%d",&iValue);
    CheckEvenOdd(iValue);
    return 0;
}