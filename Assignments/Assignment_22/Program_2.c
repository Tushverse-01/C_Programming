#include<stdio.h>
#include<stdlib.h>

int DiffInFreqEvenAndOdd(int Arr[],int iLength)
{
    int iCnt=0,iCountEvenFreq=0,iCountOddFreq=0,iDifference=0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {

        if((Arr[iCnt]%2)==0)
        {

            iCountEvenFreq++;

        }

        else
        {

            iCountOddFreq++;

        }

    }

    iDifference=iCountEvenFreq-iCountOddFreq;

    return iDifference;

}

int main()
{
    int iSize,iRet=0,iCnt=0;
    int *P=NULL;

    printf("Enter how many elements you want to store : \n");
    scanf("%d",&iSize);

    P=(int*) malloc (iSize * sizeof (int));

    if(NULL == P)
    {

        printf("Unable to allocate the memory \n");

    }

    printf("Enter the elements : \n");

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&P[iCnt]);
    }

    iRet=DiffInFreqEvenAndOdd(P,iSize);
    
    printf("The difference between frequency of Even numbers and odd nymber is : %d ",iRet);
    


    return 0;
}