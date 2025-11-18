#include<stdio.h>
#include<stdlib.h>


int GetIndexOfNumInData(int iLength,int iNum,int iArr[])
{
    int iCnt=0;
    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(iArr[iCnt] == iNum)
        {
            return iCnt;
            break;
        }

    }

}

int main()
{
    int iSize=0,iNo=0,iCnt=0,iRet=0;
    int *P=NULL;


    printf("Enter the elements you want to store : \n");
    scanf("%d",&iSize);

    P=(int*)malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");

    for(iCnt=0; iCnt<iSize; iCnt++)
    {

        scanf("%d",&P[iCnt]);

    }

    printf("Enter the number that you want to get the index of number in the enterd data : \n");
    scanf("%d",&iNo);

    iRet=GetIndexOfNumInData(iSize,iNo,P);

    printf("The index of the number %d in the data is : %d \n",iNo,iRet);
    

    free(P);

    return 0;

}