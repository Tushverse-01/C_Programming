#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckForElevenInData(int iLength,int Arr[])
{
    int iCnt=0;
    for(iCnt=0; iCnt<iLength; iCnt++)
    {

        if(Arr[iCnt] == 11)
        {
            return true;
            break;
        }
        else
        {
            return false;
        }

    }


}

int main()
{
    int iSize=0,iCnt=0;
    int *P=NULL;
    bool bRet=false;

    printf("Enter how many elements you want to store : \n");
    scanf("%d",&iSize);

    P=(int *)malloc(iSize * sizeof(int));

    if(NULL == P)
    {

        printf("Unable to allocate the memory \n");

    }

    printf("Enter the elements : \n");

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        scanf("%d", &P[iCnt]);
    }


    bRet=CheckForElevenInData(iSize,P);
    
    if(bRet == true)
    {

        printf("The number eleven is present in entered data  \n");

    }
    else
    {

        printf("The number eleven is not present in entered data  \n");


    }

    free(P);



    return 0;
}