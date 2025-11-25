#include<stdio.h>
void DisplayPattern(int iRow,int iCol)
{
    int i=0,j=0;

    for(i=1; i<=iRow; i++)
    {

        for(j=1; j<=iCol; j++)
        {
            if(i==j || i==iRow || j==iCol || i==1 || j==1 )
            {

                printf(" %d \t", j);

            }
            else
            {

                printf("   \t");

            }
        
        }

        printf("\n");

    }


}
int main()
{

    int iValue1=0,iValue2=0;

    printf("Enter the number of rows : \t");
    scanf("%d",&iValue1);

    printf("Enter the number of coloums : \t");
    scanf("%d",&iValue2);

    DisplayPattern(iValue1,iValue2);


    return 0;
}