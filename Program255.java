import java.util.*;

 class Program255
 {
    public static void main(String A[])
    {
        int iSize = 0;
        Scanner Sobj = new Scanner(System.in);

        System.out.println("Enter the number of Elemets :");
        iSize = Sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the Elements :");
        for(int i = 0; i < iSize ; i++)
        {
            Arr[i] = Sobj.nextInt();
        }

        System.out.println(" Elements of An Array is :");

        for(int i = 0 ; i <iSize ; i++)
        {
            System.out.println(Arr[i]);
        }

        
    }
 }