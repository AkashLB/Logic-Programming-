import java.util.*;

class program526
{
    public static boolean liniearSearchBidirection(int Brr[] , int iNo)
    {
         boolean bResult = false;
         int iStart = 0;
         int iEnd = 0;      
         for(iStart = 0 ,iEnd = Brr.length -1 ; iStart <= iEnd; iStart++, iEnd--)
         {
            
                if(Brr[iStart] == iNo || Brr[iEnd] == iNo)
                {
                    bResult = true;
                    break;
                }
            
         }
        return bResult;
        
    }
    
    public static void main(String A[])
    {
        boolean bRet = false;
        int iValue = 0;
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

        System.out.println("Enter the Element taht you want to search :");
        iValue = sobj.nextInt();

        bRet  = liniearSearchBidirection(Arr,iValue);

        if(bRet == true)
        {
            System.out.println("ELement is present in the array");
        }
        else
        {
            System.out.println("There is no such element in the array");
        }


        

    }
}