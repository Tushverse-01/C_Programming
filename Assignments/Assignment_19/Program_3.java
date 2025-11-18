class Logic
{
    void checkDivisibleByFiveOrEleven(int iNum)
    {
        if((iNum%5)==0 && ((iNum%11)==0))
        {
            System.out.println("The number "+iNum+" is divisible by Five And Eleven.");
        }
        else
        {
             System.out.println("The number "+iNum+" is Not divisible by Five and Eleven.");
        }
    }

}
class Program_3
{
    public static void main(String A[])
    {
        Logic lObj = new Logic();
        lObj.checkDivisibleByFiveOrEleven(55);
    }
}