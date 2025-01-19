import java.util.*;

class Digits 
 {
    public void CountDigits(int iNo)
    {
       int iDigit = 0 , iCount1 = 0 , iCount2 = 0 , iCount3 = 0  ,iCount4 = 0 , iCount5 = 0 , iCount6 = 0 , iCount7 = 0 ,iCount8 = 0 ,iCount9 = 0 , iCount0 = 0 ;

       while(iNo > 0)
       {
          iDigit = iNo % 10;
          if(iDigit == 0)
          {
            iCount0++;
          }
          else if(iDigit == 1)
          {
            iCount1++;
          }
          else if(iDigit == 2)
          {
            iCount2++;
          }
          else if(iDigit == 3)
          {
            iCount3++;
          }
          else if(iDigit == 4)
          {
            iCount4++;
          }
          else if(iDigit == 5)
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
          else if(iDigit == 9)
          {
            iCount9++;
          }
          iNo = iNo / 10;
       }

       System.out.println("0 :"+iCount0);
       System.out.println("0 :"+iCount1);
       System.out.println("0 :"+iCount2);
       System.out.println("0 :"+iCount3);
       System.out.println("0 :"+iCount4);
       System.out.println("0 :"+iCount5);
       System.out.println("0 :"+iCount6);
       System.out.println("0 :"+iCount7);
       System.out.println("0 :"+iCount8);
       System.out.println("0 :"+iCount9);

    }

 }
 class Program249
 
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