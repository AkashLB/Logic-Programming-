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
    public void Display()
    {
        for(int iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            System.out.println("Element is " +Arr[iCnt]);
        }
    }
    protected void finalize()
    {
        
        System.out.println("Iniside Finalise");
        Arr = null;
    }

 }
 class Program258
 {
    public static void main(String A[])
    {
        int iLength = 0;
        Scanner Sobj = new Scanner(System.in);

        System.out.println("Enter the number of Elemets :");
        iLength = Sobj.nextInt();

        ArrayX Aobj = new ArrayX(iLength);
        Aobj.Accept();
        Aobj.Display();
        Aobj = null;
        System.gc();
    }
 }