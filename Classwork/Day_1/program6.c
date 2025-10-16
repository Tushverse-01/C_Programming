#include<stdio.h>
int Add(int a,int b)
{
    int sum=0;
    sum=a+b;     // Business Logic 
    return sum;
}
int main()
{
    int iNo1=0, iNo2=0, iAns =0;

    printf("Enter First Number : \n");
    scanf("%d",&iNo1);

    printf("Enter Second Number : \n");
    scanf("%d",&iNo2);

    iAns=Add(iNo1,iNo2);
    printf("Addition is : %d\n",iAns);

    return 0;

}