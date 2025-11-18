#include<stdio.h>
#include<stdlib.h>

int GetIndexOfNumFromLast(int iArr[],int iLength,int iNum)
{
    int iCnt=0;
    for(iCnt=(iLength-1); iCnt>=iLength; iCnt--)
    {

        if(iArr[iCnt]==iNum)
        {

            return iCnt;
            break;

        }

    }
}
int main()
{
    int iSize=0,iRet=0,iCnt=0,iNo=0;
    int *P=NULL;

    printf("Enter how many elements you want to store : \n");
    scanf("%d",&iSize);

    P=(int *)malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");

    for(iCnt=0; iCnt<iSize; iCnt++)
    {

        scanf("%d",&P[iCnt]);

    }
    
    printf("Enter the number to get the  index of the number from last : \n");
    scanf("%d",&iNo);

    iRet=GetIndexOfNumFromLast(P,iSize,iNo);

    printf("The index of the number in data from last: %d \n",iRet);

    free(P);


    return 0;
}