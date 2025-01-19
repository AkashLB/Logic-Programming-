import java.util.*;
 class ArrayX
 {
    public int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int [iSize];
    }

    public void Accept()
    {
         Scanner Sobj = new Scanner(System.in);

        System.out.println("Enter elemets that you want : ");

        for(int iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
             Arr[iCnt] = Sobj.nextInt();
        }
    }
    
     public int Summtion()
     {
        int iSum = 0 , iCnt = 0 ;

        for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        return iSum;
     }


 }
 class Program261
 {
    public static void main(String A[])
    {
        int iLength = 0 , iRet = 0;
        Scanner Sobj = new Scanner(System.in);

        System.out.println("Enter the number of Elemets :");
        iLength = Sobj.nextInt();

        ArrayX Aobj = new ArrayX(iLength);
        Aobj.Accept();
        iRet = Aobj.Summtion();
        System.out.println("Summation of All Elements is :"+iRet);

    }
 }