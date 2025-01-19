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
         int i = 0 ;
         int j = 0;

         for(i = 0; i< Arr.length ;i++)
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

    public int CountEven()
    {
        int i = 0 , j = 0;
        int Even = 0;

        for(i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
                if((Arr[i][j] % 2) == 0)
                {
                    Even++;
                }
            }
        }
        return Even;
    }
    public int SumEven()
    {
        int iSum = 0; 
        int i = 0; 
        int j = 0;
       for(i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
                if((Arr[i][j] % 2) == 0)
                {
                    iSum = iSum + Arr[i][j];
                }
            }
        }
        return iSum;
    }
    public void DigitsCount()
    {
        int iNo = 0;
        int iCount = 0;
        int i = 0;
        int j = 0;
        for(i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0; j < Arr[i].length ; j++)
            {
                 iCount = 0;
                 iNo = Arr[i][j];
                 while(iNo > 0)
                 {
                     iCount++;
                    iNo = iNo / 10;
                 }
                System.out.println("The count of Digit in :"+Arr[i][j]+"is"+iCount);
            }
        }
    }

    public void UpdateOdd()
    {
        int i = 0 , j = 0;
        int Odd = 0;

        for(i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0; j < Arr[i].length ; j++)
            {    
                if(Arr[i][j] %2 != 0)
                {
                    Arr[i][j]++;
                }
            }
        }
    }

    public void MaximumRow()
    {
        int i = 0 , j = 0;
        int iMax = 0;

        for(i = 0 ; i < Arr.length ; i++)
        {
            iMax = Arr[i][0];
            for(j = 0; j < Arr[i].length ; j++)
            {    
                if(iMax < Arr[i][j])
                {
                    iMax = Arr[i][j];
                }
            }
            System.out.println("The Maximum number of :"+i+" is"+" "+iMax);
        }
    }

    public void MiniMumRow()
    {
        int i = 0 , j = 0;
        int iMin = 0;

        for(i = 0 ; i < Arr.length ; i++)
        {
            iMin = Arr[i][0];
            for(j = 0; j < Arr[i].length ; j++)
            {    
                if(iMin > Arr[i][j])
                {
                    iMin = Arr[i][j];
                }
            }
            System.out.println("The Minimum number of :"+i+" is"+" "+iMin);
        }
    }

    public int SumDaigonal()
    {
        if(Arr.length != Arr[0].length)
        {
            System.out.println("Unable to perform Addition of Daigonal :");
            return -1;
        }
        int i = 0 , j = 0;
        int iSum = 0;

        for(i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0; j < Arr[i].length ; j++)
            {    
                
                if(i == j)
                {
                    iSum = iSum + Arr[i][j];
                }

            }
        }
        return iSum;
    }

public int SumBorder()
    {
        if(Arr.length != Arr[0].length)
        {
            System.out.println("Unable to perform Addition of Daigonal :");
            return -1;
        }
        int i = 0 , j = 0;
        int iSum = 0;

        for(i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0; j < Arr[i].length ; j++)
            {    
                
                if((i == 0) || (i == Arr.length-1) || (j == 0) || (j == Arr[i].length-1))
                {
                    iSum = iSum + Arr[i][j];
                }

            }
        }
        return iSum;
    }



}

class Program580
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

        mobj.MaximumRow();
        mobj.MiniMumRow();

        int iRet = mobj.SumBorder();
        System.out.println("The Sum of Border elements is"+iRet);


    }
}