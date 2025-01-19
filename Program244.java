import java.util.*;

class Digits 
 {
    public int AdditionDigits(int iNo)
    {
        int iSum = 0 ;
        while(iNo > 0)
       {
            iSum = (iNo % 10) + iSum;

            iNo = iNo / 10;
       }
       
          return iSum;
    }

 }
 class Program244
 
 {
    public static void main(String A[])
    {
          int iValue = 0 , iRet = 0;
          Scanner Sobj = new Scanner(System.in);
          
          System.out.println("Enter Number");
          iValue = Sobj.nextInt();

          Digits Dobj = new Digits();
          iRet = Dobj.AdditionDigits(iValue);

          System.out.println("Addition is :"+iRet);

    }
 }