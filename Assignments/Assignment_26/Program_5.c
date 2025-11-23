#include<stdio.h>
void DisplayPattern(int iNum)
{
    int iCnt=0;

    
    for(iCnt=2; iCnt<=iNum*2; iCnt+=2)
    {
       
        {
            printf(" %d \t",iCnt);
            
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