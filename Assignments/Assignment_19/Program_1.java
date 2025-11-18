class Logic
{
    void checkLeapYearOrNot(int iYear)
    {
        if((iYear%4)==0)
        {
            System.out.println("The year "+iYear+" is leap year");

        }
        else
        {
            System.out.println("The year "+iYear+" is Not leap year");
        }
    }

}
class Program_1
{
    public static void main(String A[])
    {
        Logic lObj=new Logic();
        lObj.checkLeapYearOrNot(2024);    
    }
}