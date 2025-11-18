#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

void DisplayNumsInRange(int iArr[],int iLength,int iNum1,int iNum2)
{
    int iCnt=0;

    printf("The numbers between the range from %d to %d are as follow : \n ",iNum1,iNum2);

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(iArr[iCnt]>iNum1 && iArr[iCnt]<iNum2)
        {

            printf("%d \t",iArr[iCnt]);

        }

    }


}

int main()
{
    int iSize=0,iCnt=0,iNo1=0,iNo2=0;
    IPTR P=NULL;

    printf("Enter how many elements you want to store : \n ");
    scanf("%d",&iSize);

    P=(IPTR)malloc(iSize * sizeof(int));
    


    printf("Enter the elements : \n");
    
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&P[iCnt]);
    }

    printf("Enter the starting value of range : \n");
    scanf("%d",&iNo1);

    printf("Enter the ending value of range : \n");
    scanf("%d",&iNo2);


    DisplayNumsInRange(P,iSize,iNo1,iNo2);

    free(P);


    return 0;
}