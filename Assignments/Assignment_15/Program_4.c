#include<stdio.h>
int CalculateMultiOfDigitsOfNum(int iNum)
{
    int iDigit=0;
    int iMultiAns=0;
        iMultiAns=1;

        while(iNum!=0)
        {
            iDigit=iNum%10;
            if(iDigit==0)
            {
                iDigit=1;
            }
            iMultiAns=iDigit*iMultiAns;
            
            iNum=iNum/10;
        }
    return iMultiAns;
}
int main()
{
    int iNumber=0;
    int iMultiOfDigits=0;

    printf("Enter the Number : \n");
    scanf("%d",&iNumber);
    
    iMultiOfDigits=CalculateMultiOfDigitsOfNum(iNumber);

    printf("The Multiplication of All digits of Number is %d.\n",iMultiOfDigits);

    return 0;
}