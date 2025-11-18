class Logic
{
    void checkPalindrome(int iNum)
    {
        int iDigit=0,iReverseNum=0;
        int iOriginalNum=iNum;

        while(iNum!=0)
        {
            iDigit=iNum%10;
            iReverseNum=iReverseNum*10+iDigit;
            iNum=iNum/10;
        }

        if(iOriginalNum==iReverseNum)
        {
            System.out.println("The Number "+iOriginalNum+" is palindrome.");
        }
        else
        {
            System.out.println("The Number "+iOriginalNum+" is Not palindrome.");
        }
    }
}
class Program_2
{
    public static void main(String A[])
    {
        Logic lObj=new Logic();
        lObj.checkPalindrome(121);

    }
}