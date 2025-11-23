#include<stdio.h>
void DisplayPattern(int iNum)
{
    int iCnt=0;

    
    for(iCnt=1; iCnt<=iNum; iCnt++)
    {
       
        {
            printf(" %d \t * \t",iCnt);
            
        }
      
    }


}
int main()
{
    int iValue=0;

    printf("Enter the number : \t");
    scanf("%d",&iValue);

    DisplayPattern(iValue);


    return 0;
}