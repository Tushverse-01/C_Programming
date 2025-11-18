#include<stdio.h>
#include<stdlib.h>

int CalculateFreqOfEleven(int iLength,int iArr[])
{
    int iCnt=0,iCountFreq=0;

    //  Time Complexity: (O(N)) ;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {

        if(iArr[iCnt] == 11)
        {

            iCountFreq++;

        }

    }
    return iCountFreq;

}

int main()
{
    int iSize=0,iCnt=0,iRet=0;
    int *P=NULL;

    printf("Enter how many numbers you want to store : \n");
    scanf("%d",&iSize);

    P=(int *)malloc(iSize * sizeof(int));

    if(NULL == P)
    {

        printf("Unable to allocate the memory. \n");

    }

    printf("Enter the elements : ");

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&P[iCnt]);
    }

    iRet=CalculateFreqOfEleven(iSize,P);

    printf("The frequency of number eleven in the data is : %d",iRet);


    free(P);

    return 0;

}