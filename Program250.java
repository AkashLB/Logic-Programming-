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
          if(iDigit == 0)
          {
            iCount[0]++;
          }
          else if(iDigit == 1)
          {
            iCount[1]++;
          }
          else if(iDigit == 2)
          {
            iCount[2]++;
          }
          else if(iDigit == 3)
          {
            iCount[3]++;
          }
          else if(iDigit == 4)
          {
            iCount[4]++;
          }
          else if(iDigit == 5)
          {
            iCount[5]++;
          }
          else if(iDigit == 6)
          {
            iCount[6]++;
          }
          else if(iDigit == 7)
          {
            iCount[7]++;
          }
          else if(iDigit == 8)
          {
            iCount[8]++;
          }
          else if(iDigit == 9)
          {
            iCount[9]++;
          }
          iNo = iNo / 10;
       }

       System.out.println("0 :"+iCount[0]);
       System.out.println("1 :"+iCount[1]);
       System.out.println("2 :"+iCount[2]);
       System.out.println("3 :"+iCount[3]);
       System.out.println("4 :"+iCount[4]);
       System.out.println("5 :"+iCount[5]);
       System.out.println("6 :"+iCount[6]);
       System.out.println("7 :"+iCount[7]);
       System.out.println("8 :"+iCount[8]);
       System.out.println("9 :"+iCount[9]);

    }

 }
 class Program250
 
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