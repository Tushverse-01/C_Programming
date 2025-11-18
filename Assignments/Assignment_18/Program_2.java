class Logic
{
    void displayEvenUptoNum(int iNum)
    {
        int iCnt=0;
        
        for(iCnt=1;iCnt<=iNum;iCnt++)
        {
            if ((iCnt%2)==0)
            {
                System.out.println(iCnt);
            }
            
        }
    }

}
class Program_2
{
    public static void main(String A[])
    {
        Logic lObj=new Logic();
        lObj.displayEvenUptoNum(20);

    }
}