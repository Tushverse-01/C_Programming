/*

    step1:Understand the problem statement
    step2:Write the algorith
    step3:Deside the programming Language
    step4:Write the program
    step5:Test the program

*/
/*
    Algorithm

    START
        Accept first number as No1
        Accept second number as No2
        If the input is negative then convert it into positive
        Perform Addition of No1 and No2
        Display the addition on screen
    STOP



*/
#include<stdio.h>
float AddtionTwoNumbers(float fNo1,float fNo2)
{
    float fSum=0.0f;
    // Updater
    if(fNo1<0)
    {
        fNo1 =-fNo1;
    }
    //Updater
    if(fNo2<0)
    {
        fNo2=-fNo2;
    }
    
    fSum=fNo1+fNo2;     // Business Logic 
    
    return fSum;
}
int main()
{
    float fValue1=0.0f, fValue2=0.0f, fRet =0.0f;

    printf("Enter First Number : \n");
    scanf("%f",&fValue1);

    printf("Enter Second Number : \n");
    scanf("%f",&fValue2);

    fRet=AddtionTwoNumbers(fValue1,fValue2);
    printf("Addition is : %f\n",fRet);

    return 0;

}