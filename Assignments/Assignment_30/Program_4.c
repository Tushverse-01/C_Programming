#include<stdio.h>
void DisplayPattern(int iRow,int iCol)
{
    int i=0,j=0;

    if(iRow != iCol)
    {

        printf("Invalid input. \n");
        printf("Enter the same number of rows and column.\n");

    }
    else
    {
    
        for(i=1; i <= iRow; i++)
        {
            for(j=1; j <= iCol; j++)
            {
                if(i == 1 || i == iRow || j == 1 || j == iCol)
                {

                    printf(" * \t");

                }
                else
                {

                    printf(" @ \t");
              
                }
           
            }
       
            printf("\n");

    }
}


}

int main()
{
    int iValue1=0,iValue2;

    printf("Enter the number of rows : \t");
    scanf("%d",&iValue1);

    printf("Enter the number of colums : \t");
    scanf("%d",&iValue2);

    DisplayPattern(iValue1 , iValue2);


    return 0;
}