#include<stdio.h>
void DisplayPattern(int iRow,int iCol)
{
    int i=0,j=0;
    
    for(i=1; i <= iRow; i++)
    {
        for(j=1; j <= iCol; j++)
        {
            if((i%2)==0)
            {

                printf(" %d \t",-j);

            }
            else
            {

                printf("  %d \t",j);
              
            }
           
        }
       
        printf("\n");

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