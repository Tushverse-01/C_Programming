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
//  Function Name:  FindGreater
//  Description:    To Display Greater Number
//  Input:          Int,Int,Int
//  Output:         Greater Num
//  Author:         Tushar Vikas Bhore
//  Date:           17/10/2025
//
/////////////////
////////////////////////
/////////////////////////////////////////////////

void FindGreater(int a,int b,int c)
{

    if(a>b && a>c)
    {
        printf("The Number %d is Greater. \n",a);
    }
    else if(b>a && b>c)
    {
        printf("The Number %d is Greater. \n",b);
    }
    else
    {
        printf("The Number %d is Greater. \n",c);
    }
    
}
int main()
{
    int iNumber1=0,iNumber2=0,iNumber3=0;

    printf("Enter three Numbers to Find Larger Number : \n");
    scanf("%d %d %d" ,&iNumber1 ,&iNumber2 ,&iNumber3);

    FindGreater(iNumber1,iNumber2,iNumber3);

}