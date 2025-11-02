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
//  Function Name:  DisplayReverseFactores
//  Description:    To Display Reverse Factors
//  Input:          Int
//  Output:         Int
//  Author:         Tushar Vikas Bhore
//  Date:           17/10/2025
//
/////////////////
////////////////////////
/////////////////////////////////////////////////

void DisplayReverseFactores(int iNo)
{
    int iCnt=iNo/2;
    while(iCnt!=0)
    {
        if((iNo%iCnt)==0)
        {
            printf("%d \t",iCnt);
        }
        iCnt--;
    }

}
int main()
{
    int iValue=0;
    
    printf("Enter the Number : \t");
    scanf("%d",&iValue);

    DisplayReverseFactores(iValue);

    return 0;
}