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
//  Function Name:  SumNonFactors
//  Description:    To Perform sum of Non Factors
//  Input:          Int
//  Output:         Int
//  Author:         Tushar Vikas Bhore
//  Date:           17/10/2025
//
/////////////////
////////////////////////
/////////////////////////////////////////////////

int SumNonFactors(int iNo)
{
    int iCnt=0;
    int iSum=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
    
        if((iNo%iCnt)!=0)
        
        {
          iSum=iSum+iCnt;
        }

    }
    return iSum;

}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the Number : \t");
    scanf("%d",&iValue);

    iRet= SumNonFactors(iValue);
    
    printf("%d",iRet);

    return 0;
}