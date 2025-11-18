#include<stdio.h>
#include<stdlib.h>

#define FALSE 0;
#define TRUE 1;

typedef int BOOL;

BOOL CheckNumIsThereOrNot(int iLength,int iNum,int iArr[])
{
    int iCnt=0;

    //Time Complexity : <=(O(N)) 

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(iArr[iCnt]==iNum)
        {

            return TRUE;
            break;

        }
        else
        {
            return FALSE;
        }

    }

}

int main()
{
    int iSize=0,iNo=0,iCnt=0;
    int *P=NULL;

    BOOL bRet=FALSE;

    printf("Enter the elements you want to store : \n");
    scanf("%d",&iSize);

    P=(int*)malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");

    for(iCnt=0; iCnt<iSize; iCnt++)
    {

        scanf("%d",&P[iCnt]);

    }

    printf("Enter the number that you want to check if it is present or not in the enterd data : \n");
    scanf("%d",&iNo);

    bRet=CheckNumIsThereOrNot(iSize,iNo,P);

    if(bRet == 1)
    {
        printf("The number %d is  present in the entered data.\n",iNo);
    }
    else
    {
        printf("The number %d is not present in the entered data.\n",iNo);
    }
    


    free(P);

    return 0;

}