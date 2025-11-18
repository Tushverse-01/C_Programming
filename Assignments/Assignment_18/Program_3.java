class Logic
{
    void displayOddUptoNum(int iNum)
    {
        int iCnt=0;
        
        for(iCnt=1;iCnt<=iNum;iCnt++)
        {
            if ((iCnt%2)!=0)
            {
                System.out.println(iCnt);
            }
            
        }
    }

}
class Program_3
{
    public static void main(String A[])
    {
        Logic lObj=new Logic();
        lObj.displayOddUptoNum(20);

    }
}