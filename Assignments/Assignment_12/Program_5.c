#include<stdio.h>
#include<stdbool.h>
bool Check_DivisibleBy5(int iNum)
{
    if ((iNum%5)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
int main()
{
    int iNumber=0;

    printf("Enter the Number : \n");
    scanf("%d",&iNumber);

    printf("%s\n",Check_DivisibleBy5(iNumber)?"Yes" : "NO");

    return 0;
}