import java.util.*;

class Digits 
 {
    public void CountDigits(int iNo)
    {
       int iDigit = 0 , iCount5 = 0 , iCount6 = 0 , iCount7 = 0  ,iCount8 = 0 ;

       while(iNo > 0)
       {
          iDigit = iNo % 10;
          if(iDigit == 5)
          {
            iCount5++;
          }
          else if(iDigit == 6)
          {
            iCount6++;
          }
          else if(iDigit == 7)
          {
            iCount7++;
          }
          else if(iDigit == 8)
          {
            iCount8++;
          }
          iNo = iNo / 10;
       }
       System.out.println("Frequency of 5 is :"+ iCount5);
       System.out.println("Frequency of 6 is :"+ iCount6);
       System.out.println("Frequency of 7 is :"+ iCount7);
       System.out.println("Frequency of 8 is :"+ iCount8);
    }

 }
 class Program248
 
 {
    public static void main(String A[])
    {
          int iValue = 0 , iRet = 0;
          Scanner Sobj = new Scanner(System.in);
          
          System.out.println("Enter Number");
          iValue = Sobj.nextInt();

          Digits Dobj = new Digits();
           Dobj.CountDigits(iValue);

    }
 }