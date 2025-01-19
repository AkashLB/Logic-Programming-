import java.util.*;

class program531
{
    public static void SelectionSort(int Brr[])
    {
        int i = 0 , j = 0 , min_index = 0 , temp = 0;

        for(i = 0 ; i < Brr.length; i++)
        {
             min_index = i;
            for(j = i ; j < Brr.length; j++)
            {
                if(Brr[min_index]>Brr[j])
                {
                    min_index = j;
                }
            }
            temp  = Brr[i];
            Brr[i] = Brr[min_index];
            Brr[min_index] = temp;
        }
    }


    public static void main(String A[])
    {
        int iSize = 0;
        int i = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of Elements");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the values");

        for(i = 0 ; i < iSize ; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        System.out.println("Elements of the Array are :");
            
        for(i = 0 ; i < iSize ; i++)
        {
            System.out.print(Arr[i]+"\t");
        }

        System.out.println();
        
        SelectionSort(Arr);

        System.out.println("Elements of the Array After sorting are :");
            
        for(i = 0 ; i < iSize ; i++)
        {
            System.out.print(Arr[i]+"\t");
        }
        System.out.println();

      

    }
}