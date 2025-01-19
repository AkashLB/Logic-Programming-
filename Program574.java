import java.util.*;

class Matrix
{
    public int Arr[][];

    public Matrix(int iRow,int iCol)
    {
        Arr = new int[iRow][iCol];
    }

    public void Accept()
    {
         System.out.println("Please enter the values :");
         
         Scanner sobj = new Scanner(System.in);
         int i = 0, j = 0;

         for(i = 0;i<Arr.length;i++)
         {
            for(j = 0 ; j < Arr[i].length;j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
         }

    }
    public void Display()
    {
        System.out.println("Elements of the Matrix :");
         
         int i = 0, j = 0;
         for(i = 0;i<Arr.length;i++)
         {
            for(j = 0 ; j < Arr[i].length;j++)
            {
                System.out.println(Arr[i][j]+"\t");
            }
            System.out.println();
         }
    }
    public int Summation()
    {
        int i = 0 , j = 0;
        int iSum = 0;

        for(i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
                iSum = iSum + Arr[i][j];
            }
        }
        return iSum;
    }
}

class Program574
{
    public static void main(String a[])
    {
        int iRow = 0 , iCol = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter number of rows :");
        iRow = sobj.nextInt();

        System.out.println("Please enter number of coloumns");
        iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow,iCol);
        mobj.Accept();
        mobj.Display();

        int iRet =mobj.Summation();
        System.out.println("The summation of all the elements is "+iRet);
    }
}