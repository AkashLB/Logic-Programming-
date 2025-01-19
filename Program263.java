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
    
     public void CountDigit()
     {
        int iCount = 0 , iCnt = 0 , iDigit = 0;
        for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            while(Arr[iCnt] != 0)
            {
                iCount++;
                Arr[iCnt] = Arr[iCnt] / 10;

            }
            iCount = 0;
            System.out.println("Count of" + iCnt + "element is :"+ iCount);
        }
     }


 }
 class Program263
 {
    public static void main(String A[])
    {
        int iLength = 0;
        Scanner Sobj = new Scanner(System.in);

        System.out.println("Enter the number of Elemets :");
        iLength = Sobj.nextInt();

        ArrayX Aobj = new ArrayX(iLength);
        Aobj.Accept();
        Aobj.CountDigit();

    }
 }