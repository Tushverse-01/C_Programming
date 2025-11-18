class Logic
{
    void FindFactorial(int iNo)
    {
        int iCnt=0,iFact=0;
        for(iCnt=1,iFact=1;iCnt<=iNo;iCnt++)
        {
            iFact=iFact*iCnt;
        }
        System.out.println("The Factorial of Number is : "+iFact);
    }
} 
class Program_3 
{
    public static void main(String A[])
    {
        Logic lObj=new Logic();
        lObj.FindFactorial(5);

    }
    
}
