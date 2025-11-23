#include<stdio.h>
void DisplayPattern(int iRow,int iCol)
{
    int i=0,j=0;
    int iEvenNum=0,iOddNum=0;
    
    for(i=1; i <= iRow; i++)
    {
        for(j=1,iEvenNum=2,iOddNum=1; j <= iCol; j++)
        {
            if((i%2)==0)
            {

                printf("%d \t",iOddNum);
                iOddNum+=2;
              
            }
            else
            {

                printf("%d \t",iEvenNum);
                iEvenNum+=2;
              
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