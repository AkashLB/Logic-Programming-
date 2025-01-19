import java.util.*;

class Arithmatic
{
    public int ivalue1 ;
    public int iValue2 ;

    public Arithmatic(int A , int B)
    {
        ivalue1 = A ;
        iValue2 = B;
    }
    
      public  int Addition()
      {
        
           int Result = 0;
           Result = ivalue1 + iValue2;
           return Result;

      }
}
class Program232
{
    public static void main(String a[])
    {
      
       int No1 = 0 , No2 =0 , Ans = 0;
       Scanner Sobj = new Scanner(System.in);

       System.out.println("Enter First number :");
       No1 = Sobj.nextInt();

       System.out.println("Enter Second number :");
       No2 = Sobj.nextInt();

       Arithmatic Aobj = new Arithmatic(No1 , No2);

       Ans  = Aobj.Addition();

       System.out.println("Addition is : "+Ans);

    }
}