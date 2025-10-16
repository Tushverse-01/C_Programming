
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
////////////////////////////////////////////////////////////////
//
//      Required Header files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function Name :  AddtionTwoNumbers
//  Description:     It is used to perform addition
//  Input:           Float,Float
//  Output:          Float
//  Author:          Tushar Vikas Bhore.
//  Date:            09/10/25
//
/////////////////////////////////////////////////////////////

float AddtionTwoNumbers(
                            float fNo1,             //  First Input
                            float fNo2              //  Second Input
                        )
{
    float fSum=0.0f;                                //  To Store the Result
  
    if(fNo1<0)                                      //  Updater
    {
        fNo1 =-fNo1;
    }

    if(fNo2<0)                                      //  Updater
    {
        fNo2=-fNo2;
    }
    
    fSum=fNo1+fNo2;                                 // Business Logic 
    
    return fSum;
}      //   End of AdditionTwoNumbers

////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////

int main()                                          
{
    float fValue1=0.0f, fValue2=0.0f;               //  To Accept User Input
    float fRet =0.0f;                               //  To Store the Result

    printf("Enter First Number : \n");
    scanf("%f",&fValue1);

    printf("Enter Second Number : \n");
    scanf("%f",&fValue2);

    fRet=AddtionTwoNumbers(fValue1,fValue2);        //  Method call
    printf("Addition is : %f\n",fRet);

    return 0;

}       //  End of Main Function

////////////////////////////////////////////////////////////////
//
//  Testcases successfully Handaled by the Application
//
//  Input1:10.5        Input2:3.2       Output:13.7
//  Input1:10.5        Input2:3.2       Output:13.7
//  Input1:10.5        Input2:3.2       Output:13.7
//  Input1:10.5        Input2:0.0       Output:10.5
//
////////////////////////////////////////////////////////////////
