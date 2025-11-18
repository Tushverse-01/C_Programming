class Logic
{
    void calculateSunEvenOddDigits(int iNum)
    {
        int iDigit=0,iSumEvenDigit=0,iSumOddDigit=0;

        while(iNum!=0)
        {

            iDigit=iNum%10;

            if((iDigit%2)==0)
            {
                iSumEvenDigit=iSumEvenDigit+iDigit;
            }
            else
            {
                iSumOddDigit=iSumOddDigit+iDigit;   
            }

            iNum=iNum/10;

        }

        System.out.println("The sum of the Even digits of the Number is : "+iSumEvenDigit);

        System.out.println("The sum of the Odd digits of the Number is : "+iSumOddDigit);


    }
}
class Program_4
{
    public static void main(String A[])
    {
        Logic lObj=new Logic();
        lObj.calculateSunEvenOddDigits(123456);
    }
}