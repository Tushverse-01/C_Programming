#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckNumContainZeroOrNot(int iNo)
{
    int iDigit=0;
    while(iNo!=0)
    {    
        iDigit=iNo%10;
        if(iDigit==0)
        {
            return TRUE;
        }
        iNo=iNo/10;
    }
}

int main()
{
    int iNumber=0;
    BOOL bRet=FALSE;

    printf("Enter the Number : \n");
    scanf("%d",&iNumber);

    bRet=CheckNumContainZeroOrNot(iNumber);


    if(bRet==TRUE)
    {
        printf("The Number Contains Zero\n");
    }
    else
    {
        printf("The Number does Not Contains Zero\n");
    }

    return 0;
}