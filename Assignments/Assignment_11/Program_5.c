#include<stdio.h>
void DisplayRevInRange(int iStart,int iEnd)
{
    int iCnt=0;
     if(iStart<0)
    {
        iStart=-iStart;
    }
      if(iEnd<0)
    {
        iEnd=-iEnd;
    }
     if(iStart>iEnd)
    {    
        printf("Invalid Range\n");
    }
    else
    {
        for(iCnt=iEnd;iCnt>=iStart;iCnt--)
        {
            printf("%d \t",iCnt);
        }
    }

}
int main()
{
    int iValue1=0,iValue2=0;
    
    printf("Enter the Starting No in Range:\n");
    scanf("%d",&iValue1);
    
    printf("Enter the End No in Range:\n");
    scanf("%d",&iValue2);

    DisplayRevInRange(iValue1,iValue2);


    return 0;
}