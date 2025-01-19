import java.util.*;

class Arithmatic
{
    public int Power(int Base , int Index)
    {
       int iCnt = 0;
       int iResult = 0;
    
       iResult = 1 ;

            for(iCnt = 1 ; iCnt <= Index ; iCnt++ )
            {

                iResult = Base * iResult;

            }
            return iResult;            
    }
}
class Program235

{
    public static void main(String a[])
    {
      
       int No1 = 0 , No2 =0 , Ans = 0;
       Scanner Sobj = new Scanner(System.in);

       System.out.println("Enter Base :");
       No1 = Sobj.nextInt();

       System.out.println("Enter Index :");
       No2 = Sobj.nextInt();

       Arithmatic Aobj = new Arithmatic();

       Ans  = Aobj.Power(No1 , No2);

       System.out.println("Result  is : "+Ans);

    }
}