#include<stdio.h>
int main()
{
    int iNo1=0, iNo2=0, iAns =0;

    printf("Enter First Number : \n");
    scanf("%d",&iNo1);

    printf("Enter Second Number : \n");
    scanf("%d",&iNo2);

    iAns=iNo1+iNo2;    //  Business Logic 
    printf("Addition is : %d\n",iAns);

    return 0;

}