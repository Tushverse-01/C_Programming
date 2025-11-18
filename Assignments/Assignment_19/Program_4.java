class Logic
{
    void displayDigits(int iNum)
    {
        int iDigit=0;

        while(iNum!=0)
        {
            iDigit=iNum%10;
            System.out.println(iDigit);
            iNum=iNum/10;
        }
    }
}
class Program_4
{
    public static void main(String A[])
    {
        Logic lObj = new Logic();
        lObj.displayDigits(9876);
    }
}