import java.util.*;

class Arithmatic
{
    
      public  int Addition(int A , int B)
      {
        
           int Result = 0;
           Result = A + B;
           return Result;

      }
}
class Program231
{
    public static void main(String a[])
    {
      
       int No1 = 0 , No2 =0 , Ans = 0;
       Scanner Sobj = new Scanner(System.in);

       System.out.println("Enter First number :");
       No1 = Sobj.nextInt();

       System.out.println("Enter Second number :");
       No2 = Sobj.nextInt();

       Arithmatic Aobj = new Arithmatic();

       Ans  = Aobj.Addition(No1 , No2);

       System.out.println("Addition is : "+Ans);

    }
}