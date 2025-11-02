/////////////////////////////////////////////////
////////////
//
//  Required Header Files 
//
////////////
/////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////
////////////////////////
/////////////////
//
//  Function Name:  CheckEqualOrNot
//  Description:    To Check Numbers are Equal or not 
//  Input:          Int,Int
//  Output:         Equal or Not
//  Author:         Tushar Vikas Bhore
//  Date:           18/10/2025
//
/////////////////
////////////////////////
/////////////////////////////////////////////////

bool CheckEqualOrNot(int iNo1,int iNo2)
{
    if(iNo1==iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue1=0,iValue2=0;
    bool bRet=false;

    printf("Enter the First Number : \t");
    scanf("%d",&iValue1);
    
    printf("Enter the Second Number : \t");
    scanf("%d",&iValue2);


    bRet=CheckEqualOrNot(iValue1,iValue2);

    if(bRet==true)
    {
        printf("The Given Number's (%d) and (%d) are Equal ",iValue1,iValue2);

    }
    else
    {
        printf("The Given Number's (%d) and (%d) are Not Equal ",iValue1,iValue2);
    }


    return 0;
}