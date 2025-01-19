import java.util.*;
class Calculations
{
    public float CalculatePercentage(int iValue1 , int iValue2)
    {
        float fResult = 0.0f;
        fResult = ( (float) iValue1 / (float) iValue2 ) * 100;
        return fResult;
    }
}

class Program233
{

    public static void main(String A[])
    {
         int iNo1 = 0 , iNo2 =0 ;
         float Ans = 0.0f;
       Scanner Sobj = new Scanner(System.in);

       System.out.println("Enter Obtained Marks :");
       iNo1 = Sobj.nextInt();

       System.out.println("Enter Total Marks :");
       iNo2 = Sobj.nextInt();

       Calculations Cobj = new Calculations();

       Ans = Cobj.CalculatePercentage(iNo1 , iNo2);
       System.out.println("Percentage is :"+Ans );



    }
}