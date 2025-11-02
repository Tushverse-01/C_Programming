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
//  Function Name:  CheckMax
//  Description:    To Check Number is Max or Not
//  Input:          Int
//  Output:         Max or not
//  Author:         Tushar Vikas Bhore
//  Date:           17/10/2025
//
/////////////////
////////////////////////
/////////////////////////////////////////////////

bool CheckMax(int iNo1,int iNo2)
{
    if(iNo1<iNo2)
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
    int iNum1=0,iNum2=0;
    bool bRet=false;

    printf("Enter First Number : \t \n");
    scanf("%d",&iNum1);

    printf("Enter the Second Number : \t\n ");
    scanf("%d",&iNum2);

    bRet=CheckMax(iNum1,iNum2);

    if(bRet==true)
    {
        printf("The Number %d is Greater than number %d \n",iNum2,iNum1);

    }
    else
    {
        printf("The Number %d is Greater than number %d \n",iNum1,iNum2);
    }
    
    return 0;
}