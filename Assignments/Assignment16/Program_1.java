class Logic
{
    void CalculateSum(int iNo)
    {
        int iSum=0,iCnt=0;

        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
            iSum=iSum+iCnt;
        }

        System.out.println("The Addition of first "+iNo+" Natural Numbers is "+iSum);

    }
}
class Program_1
{
    public static void main(String A[])
    {
        Logic lObj = new Logic();
        lObj.CalculateSum(10);

    }
}