import java.util.*;
class Program230
{
     
      public static int Addition(int A , int B)
      {
        
           int Result = 0;
           Result = A + B;
           return Result;

      }
    public static void main(String a[])
    {
      
       int No1 = 0 , No2 =0 , Ans = 0;
       Scanner Sobj = new Scanner(System.in);

       System.out.println("Enter First number :");
       No1 = Sobj.nextInt();

       System.out.println("Enter Second number :");
       No2 = Sobj.nextInt();

       Ans  = Addition(No1 , No2);

       System.out.println("Addition is : "+Ans);

    }
}