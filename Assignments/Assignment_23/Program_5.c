#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

float MultiplOfOddNumInData(int iArr[],int iLength)
{
    int iCnt=0;
    float fProductOfOddNums=1;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if((iArr[iCnt]%2) != 0)
        {
            fProductOfOddNums=fProductOfOddNums * iArr[iCnt];
        }

    }

    return fProductOfOddNums;

}

int main()
{
    int iSize=0,iCnt=0;
    IPTR P=NULL;
    float fRet=0.0f;

    printf("Enter how many elements you want to store : \n");
    scanf("%d",&iSize);

    P=(IPTR)malloc(iSize * sizeof(int));

    if(NULL == P)
    {
        printf("Unable to allocate the memory. \n");
    }

    printf("Enter the elements : \n");

    for(iCnt=0; iCnt<iSize; iCnt++)
    {

        scanf("%d",&P[iCnt]);

    }

    fRet=MultiplOfOddNumInData(P,iSize);

    printf("The product of the odd numbers in the entered data is : %f \n",fRet);

    free(P);

    return 0;
}