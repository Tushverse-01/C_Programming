#include<stdio.h>
#include<stdlib.h>

int CountEven(int Brr[],int iLength)
{
    int iCnt=0,iCount=0;
    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if((Brr[iCnt]%2) == 0)
        {

            iCount++;

        }

    }

    return iCount;

}

int main()
{
    int iSize=0,iRet=0,iCnt=0;
    int *p=NULL;

    printf("Enter the how many elements you want : \n ");
    scanf("%d",&iSize);

    printf("Enter the elements : \n");

    p=(int *) malloc (iSize * sizeof (int));

    if(NULL == p)
    {
        printf("Unable to allocate the memory\n");
    }

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet=CountEven(p,iSize);

    printf(" There are %d even numbers in entered data. ",iRet);




    return 0;
}