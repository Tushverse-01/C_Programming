class Logic
{
    void FindMinimum(int iNum1,int iNum2,int iNum3)
    {
        if(iNum1<iNum2 && iNum1<iNum3)
        {
            System.out.println("The number "+iNum1+" is Minimum.");
        }
        else if(iNum2<iNum1 && iNum2<iNum3)
        {
            System.out.println("The number "+iNum3+" is Minimum.");
        }
        else
        {
            System.out.println("The number "+iNum3+" is Minimum.");
        }

    }

}
class Program_4
{
    public static void main(String A[])
    {
        Logic lObj = new Logic();
        lObj.FindMinimum(3,7,2);

    }

}