#include<stdio.h>
void DisplayPattern(int iRow,int iCol)
{
    int i=0,j=0,k=0;
  
    
    for(i=1,k=1; i <= iRow; i++)
    {
        for(j=1; j <= iCol; j++)
        {
            
            printf(" %d \t",k);
            k++;
           
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