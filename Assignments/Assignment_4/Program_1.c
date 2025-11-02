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
//  Function Name:  MultiplicationOfFactors
//  Description:    To perform Multiplication Of Factors
//  Input:          Int
//  Output:         Int
//  Author:         Tushar Vikas Bhore
//  Date:           17/10/2025
//
/////////////////
////////////////////////
/////////////////////////////////////////////////

int MultiplicationOfFactors(int iNo)
{
    int iCnt=0;
    int iMultiFact=1;
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iMultiFact=iMultiFact*iCnt;
        }
       
    }
         return iMultiFact;

}
int main()
{
    int iValue =0;
    int iRet=0;

    printf("Enter the Number : \t");
    scanf("%d",&iValue);

    iRet=MultiplicationOfFactors(iValue);

    printf("The Multiplication of Factors of the Number( %d ) is : %d \n",iValue,iRet);

    return 0;
}