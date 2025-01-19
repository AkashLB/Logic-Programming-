import java.util.*;

class Digits 
 {
    public void CountDigits(int iNo)
    {
        int iCount[] = {0,0,0,0,0,0,0,0,0,0};
       int iDigit = 0;

       while(iNo > 0)
       {
          iDigit = iNo % 10;
          iCount[iDigit]++;
          iNo = iNo / 10;
       }

      for(int iCnt = 0; iCnt < 9 ; iCnt++ )
      {
        if(iCount[iCnt] !=0)
         System.out.println("frequency of "+iCnt+" :"+iCount[iCnt]);
      
      }
    }

 }
 class Program252
 
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