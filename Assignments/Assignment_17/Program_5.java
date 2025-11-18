class Logic
{
    void displayTable(int iNum)
    {
        int iCnt=0,iMultiAns=0;
        for(iCnt=1;iCnt<=10;iCnt++)
        {
            iMultiAns=iNum*iCnt;
            System.out.println(iMultiAns);
        }

    }

}
class Program_5
{
    public static void main(String A[])
    {
        Logic lObj=new Logic();
        lObj.displayTable(5);

    }
}