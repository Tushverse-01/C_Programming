class Logic
{
    void sumOfDigits(int iNum)
    {
        int iSum=0,iDigit=0;

        while(iNum!=0)
        {
            iDigit=iNum%10;
            iSum=iSum+iDigit;
            iNum=iNum/10;
        }
        System.out.println("The addition of the digits is : "+iSum);
    }
}
class Program_1
{
    public static void main(String A[])
    {
        Logic lObj=new Logic();
        lObj.sumOfDigits(1234);

    }
}