#include<stdio.h>
int DisplayNumbersInRange(int iStart,int iEnd)
{
    int iCnt=0;
    int iSum=0;

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

        for(iCnt=iStart;iCnt<=iEnd;iCnt++)
        {
            if((iCnt%2)==0)
            {
                iSum=iSum+iCnt;
            }
        }
    }

        return iSum;
}

int main()
{
    int iRange1=0,iRange2=0;
    int iRet=0;
    
    printf("Enter the Starting number:\n");
    scanf("%d",&iRange1);

    printf("Enter the Last number:\n");
    scanf("%d",&iRange2);

    iRet=DisplayNumbersInRange(iRange1,iRange2);

    if(iRet>0)
    {
        printf("The Sum of the Numbers in the range is : %d",iRet);
    }

    return 0;
}