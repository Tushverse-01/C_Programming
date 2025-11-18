class Logic
{
    void checkPositiveNegativeOrZero(int iNum)
    {

        if(iNum>0)
        {
            System.out.println("The number "+iNum+" is Positive");
        }
        else if(iNum<0)
        {
            System.out.println("The number "+iNum+" is Negative");

        }
        else 
        {
            System.out.println("The number "+iNum+" is Zero");

        }

    }

}
class Program_5
{
    public static void main(String A[])
    {

        Logic lObj=new Logic();
        lObj.checkPositiveNegativeOrZero(-8);

    }
}