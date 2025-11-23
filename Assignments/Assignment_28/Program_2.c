#include<stdio.h>
void DisplayPattern(int iRow,int iCol)
{
    int i=0,j=0;
    char cCh1='A';
    char cCh2='a';
    
    for(i=1; i <= iRow; i++)
    {
        for(j=1,cCh1='A',cCh2='a'; j <= iCol; j++,cCh1++)
        {
            if((i%2)==0)
            {
                printf(" %c \t",cCh2);
                cCh2++;

            }
            else
            {
                printf(" %c \t",cCh1);
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