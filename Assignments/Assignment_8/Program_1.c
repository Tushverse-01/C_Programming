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
//  Function Name:  CheckLevelOfNum
//  Description:    To Check Number is Greater
//                  or Smaller than 50. 
//  Input:          Int
//  Output:         Int
//  Author:         Tushar Vikas Bhore
//  Date:           18/10/2025
//
/////////////////
////////////////////////
/////////////////////////////////////////////////

void CheckLevelOfNum(int iNo)
{
    
    if(iNo<50)
    {
        printf("The Number %d is Small \n",iNo);
    }
    else if(iNo>100)
    {
        printf("The Number %d is Large \n",iNo);
    }
    else if(50<iNo<100)
    {
        printf("The Number %d is Medium \n",iNo);
    }

}
int main()
{
    int iValue=0;

    printf("Enter the Number : \t");
    scanf("%d",&iValue);

    CheckLevelOfNum(iValue);

    return 0;
}