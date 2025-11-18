class Logic
{
    void CheckEvenOdd(int iNum)
    {
        if((iNum%2)==0)
        {
            System.out.println("The Number is Even");
        }
        else
        {
            System.out.println("The Number is Odd");
        }
    }

}
class Program_2 
{
    public static void main(String A[])
    {
        Logic lObj=new Logic();
        lObj.CheckEvenOdd(7);
    }
    
}
