import java.util.*;

class Digits 
 {
    public int MultiplicationDigits(int iNo)
    {
        int iDigits = 0 , iMul = 1 ;
    while(iNo > 0)
    {
             
        iDigits = iNo % 10;

            if(iDigits == 0)
            {
                iDigits = 1 ;
            }
            
        iMul = iDigits * iMul;

            iNo = iNo / 10;
    }
       
          return iMul;
    }

 }
 class Program241
 {
    public static void main(String A[])
    {
          int iValue = 0 , iRet = 0;
          Scanner Sobj = new Scanner(System.in);
          
          System.out.println("Enter Number");
          iValue = Sobj.nextInt();

          Digits Dobj = new Digits();
          iRet = Dobj.MultiplicationDigits(iValue);

          System.out.println("Multipliction is : "+iRet);

    }
 }