class Logic
{
    void displayGrade(int iMarks)
    {
        if(iMarks>=80)
        {
            System.out.println("The Grade is : 'A'. ");
        }
        else if(iMarks>60 && iMarks<79)
        {
            System.out.println("The Grade is : 'B'. ");
        }
        else if(iMarks>40 && iMarks<59)
        {
            System.out.println("The Grade is : 'C'. ");
        }
        else if(iMarks>0 && iMarks<40 )
        {
            System.out.println("The Grade is : 'F'. ");
        }
        else
        {
            System.out.println("Invalid Value Entered");
        }

    }

}
class Program_2
{
    public static void main(String A[])
    {
        Logic lObj = new Logic();
        lObj.displayGrade(80);

    }
}