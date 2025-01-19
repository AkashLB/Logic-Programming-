import java.util.*;

class Digits 
 {
    public void CountDigits(int iNo)
    {
       int iDigit = 0 , iCount = 0;

       while(iNo > 0)
       {
          iDigit = iNo % 10;
          if(iDigit == 7)
          {
            iCount++;
          }
          iNo = iNo / 10;
       }
       System.out.println("Frequency of 7 is :"+ iCount);
    }

 }
 class Program246
 
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