class Logic
{
    void checkMax(int iNum1,int iNum2)
    {
        if(iNum1>iNum2)
        {
            System.out.println("The Number "+iNum1+" is Greater than Number "+iNum2);
        }
        else
        {
            System.out.println("The Number "+iNum2+" is Greater than Number "+iNum1);

        }
    }
}
class Program_3
{
    public static void main(String A[])
    {
        Logic lObj=new Logic();
        lObj.checkMax(20, 15);

    }
}