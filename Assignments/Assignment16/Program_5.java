class Logic
{
    void countDigits(int iNum)
    {
        int iCount=0,iDigit=0;

        while(iNum!=0)
        {

            iDigit=iNum%10;
            iCount++;
            iNum=iNum/10;
        }
        System.out.println("There are "+iCount+" digits in the Number");
    }
}
class Program_5
{
    public static void main(String A[])
    {
        Logic lObj=new Logic();
        lObj.countDigits(7865);

    }
}