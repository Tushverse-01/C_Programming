import java.util.Scanner;

class Logic
{
    void calculatePowerOfNum(int iNum,int iPow)
    {
        int iCnt=0,iAns=0;

        for(iCnt=1,iAns=1;iCnt<=iPow;iCnt++)
        {
            iAns=iAns*iNum;

        }
       
        System.out.println("The power "+iPow+" of number "+iNum+" is :"+iAns);

    }

}
class Program_5
{
    public static void main(String A[])
    {
        int iNumber=0,iPower=0,iRet=0;

        System.out.println("Enter the Number : ");
        Scanner sObj = new Scanner(System.in);
        iNumber=sObj.nextInt();


        System.out.println("Enter the Power : ");
        iPower=sObj.nextInt();

        Logic lObj = new Logic();
        lObj.calculatePowerOfNum(iNumber,iPower);


    }
}