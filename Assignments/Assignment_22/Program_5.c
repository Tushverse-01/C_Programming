#include<stdio.h>
#include<stdlib.h>
int CalculateFreqOfNum(int iLength,int iArr[],int iNum)
{
    int iCnt=0,iCountFreq=0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(iArr[iCnt]==iNum)
        {
            iCountFreq++;
        }

    }

    return iCountFreq;

}
int main()
{
    int iSize=0,iNo=0,iRet=0,iCnt=0;
    int *P=NULL;
    
    printf("Enter how many elements you want to store : \n");
    scanf("%d",&iSize);

    P=(int *)malloc(iSize * sizeof (int));

    printf("Enter the elements : ");

    for(iCnt=0; iCnt<iSize; iCnt++)
    {

        scanf("%d",&P[iCnt]);

    }

    printf("Enter the number whose frequency you want to calculate : \n");
    scanf("%d",&iNo);

    iRet=CalculateFreqOfNum(iSize,P,iNo);

    printf("The frequency of number %d is : %d",iNo,iRet);

    free(P);

    return 0;
}