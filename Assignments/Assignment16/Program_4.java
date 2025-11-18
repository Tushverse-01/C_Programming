class Logic
{
    void reverseNumber(int iNum)
    {
        int iDigit=0;
        int iReverseNum=0;

        while(iNum!=0)
        {
            iDigit=iNum%10;
            iReverseNum=iReverseNum*10+iDigit;
            iNum=iNum/10;
        }
        System.out.println("The Reverse number is "+iReverseNum);
    }
}
class Program_4
{
    public static void main(String A[])
    {
        Logic lObj =new Logic();
        lObj.reverseNumber(1234);

    }
}