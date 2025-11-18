class Logic
{
    void checkPrime(int iNum)
    {
        int iCnt=0;
        for(iCnt=2;iCnt<=iNum-1;iCnt++)
        {
            if((iNum%iCnt)==0)
            {
                System.out.println("The Number "+iNum+" is Not Prime");
                break;
            }
            else
            {
                System.out.println("The Number "+iNum+" is Prime");
                break;
            }
            
        } 

    }
}
class Program_1
{
    public static void main(String A[])
    {
        Logic lObj=new Logic();
        lObj.checkPrime(11);

    }
}