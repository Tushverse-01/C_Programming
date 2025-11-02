/////////////////////////////////////////////////
////////////
//
//  Required Header Files 
//
////////////
/////////////////////////////////////////////////


#include<stdio.h>

/////////////////////////////////////////////////
////////////////////////
/////////////////
//
//  Function Name:  DiffInSumFactOrSumNonFact
//  Description:    To Calculate Diff in Factor& Non Factors
//  Input:          Int
//  Output:         Int
//  Author:         Tushar Vikas Bhore
//  Date:           17/10/2025
//
/////////////////
////////////////////////
/////////////////////////////////////////////////

int DiffInSumFactOrSumNonFact(int iNo)
{
    int iCnt=0;
    int iSumFact=0;
    int iSumNonFact=0;
    int iDiff=0;
    
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iSumFact=iSumFact+iCnt;
        }

    }
     for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iNo%iCnt)!=0)
        {
            iSumNonFact=iSumNonFact+iCnt;
        }

    }

    iDiff=iSumFact-iSumNonFact;

    return iDiff;

}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the Number : \t");
    scanf("%d",&iValue);

    iRet=DiffInSumFactOrSumNonFact(iValue);

    printf("The Difference between Summation of Factors & Non Factors is : %d\n",iRet);

    return 0;
}