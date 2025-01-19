import java.util.*;
class Rectangle
{
    public int CalculateArea(int iValue1 , int iValue2)
    {
           int iResult = 0;
           iResult = iValue1 * iValue2;
           return iResult; 
    }
}

class Program234
{

    public static void main(String A[])
    {
         int iNo1 = 0 , iNo2 =0 ;
        int Ans = 0;
       Scanner Sobj = new Scanner(System.in);

       System.out.println("Enter length :");
       iNo1 = Sobj.nextInt();

       System.out.println("Enter width :");
       iNo2 = Sobj.nextInt();

       Rectangle Robj = new Rectangle();

       Ans = Robj.CalculateArea(iNo1 , iNo2);
       System.out.println("Percentage is :"+Ans );



    }
}