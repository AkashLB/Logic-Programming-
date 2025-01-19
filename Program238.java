import java.util.*;
 
 class Numbers
 {
        public int EvenFactors(int iNo)
        {
            int iCnt = 0 , iSum = 0;
            for(iCnt = 1 ; iCnt <= (iNo/2) ; iCnt++)
            {
                if((iNo % iCnt )== 0)
                {
                    if(iCnt % 2 == 0)
                    {                
                         iSum = iCnt + iSum;
                    }

                }
            }
            return iSum;
        } 
 }
 class Program238
 {
    public static void main(String A[])
    {
          int iValue = 0 , iRet = 0;
          Scanner Sobj = new Scanner(System.in);
          
          System.out.println("Enter Numeber");
          iValue = Sobj.nextInt();

          Numbers Nobj = new Numbers();
          iRet = Nobj.EvenFactors(iValue);

          System.out.println("Addition of Even Factors :"+ iRet); 
  
    }
 }