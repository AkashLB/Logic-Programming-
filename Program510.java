class node 
{
    public int data;
    public node next;

    public node(int x)
    {
        data = x;
        next = null;
    }
}

class SinglyLL
{
    public node head;
    public int iCount;

    public SinglyLL()
    {
        this.head = null;
        this.iCount = 0;
    }
  
    public void InsertFirst(int no)
    {
        node newn = null;
        
        newn = new node(no);

        if(head == null)
        {
            head = newn;
        }
        else
        {
            newn.next = head;
            head = newn;
        }
        iCount++;
  }
    
    public void InsertLast(int no)
    {
        node newn = null;      
        newn = new node(no);

        if(head == null)
        {
            head = newn;
        }
        else
        {
            node temp = head;

            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = newn;
            
        }
        iCount++;
    }
    public void Display()
    {
        System.out.println("Elements of the LinkedList are :");
        
        node temp = head;
        while(temp != null)
        {
            System.out.print("|"+temp.data+"|->");
            temp = temp.next;
        }
        System.out.println("null");
    }
    public int Count()
    {
        return iCount;
    }
    public void DeleteFirst()
    {

        if(head == null)
        {
            System.out.println("Linklist is empty");
            return;
        }
        else if(head.next == null)
        {
           head = null;    
        }

        else
        {
           head = head.next;
        }
        System.gc();
        iCount--;
    }
    public void DeleteLast()
    {

        if(head == null)
        {
            System.out.println("Linklist is empty");
            return;
        }
        else if(head.next == null)
        {
           head = null;    
        }
        else
        {
            node temp = head;
            while(temp.next.next != null)
            {
                temp = temp.next;
            }
            temp.next = null;
            System.gc();
        }
        iCount--;

    }

    public void InsertAtPos(int no , int iPos)
    {
        if(iPos < 1 || iPos > iCount+1)
        {
            System.out.println("Given position is Invalid");
            return;
        }
        else if(iPos == 1)
        {
            InsertFirst(no);
        }
        else if(iPos == iCount + 1)
        {
            InsertLast(no);
        }
        else
        {
            int i = 0;
            node newn = new node(no);
            node temp = head;

            for(i = 1 ; i < iPos -1 ; i++)
            {
                temp = temp.next;
            }
            newn.next = temp.next;
            temp.next = newn;
            iCount++;
        }
    }

    public void DeleteAtPos(int iPos)
    {
        if(iPos < 1 || iPos > iCount)
        {
            System.out.println("Given position is Invalid");
            return;
        }
        else if(iPos == 1)
        {
            DeleteFirst();
        }
        else if(iPos == iCount)
        {
            DeleteLast();
        }
        else
        {
            int i = 0;
            node temp = head;

            for(i = 1 ; i < iPos -1 ; i++)
            {
                temp = temp.next;
            }
            temp.next = temp.next.next;
            System.gc();
            iCount--;
        }
    }
}
class Program510
{
   public static void main(String Arg[])
   {
     int iRet = 0;
     SinglyLL sobj = new SinglyLL();

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);

    sobj.Display();
    iRet = sobj.Count();

    System.out.println("Number of elements in the linklist are :"+iRet);

    sobj.InsertAtPos(75,4);
    sobj.DeleteAtPos(4);

    
    sobj.Display();
    iRet = sobj.Count();

    System.out.println("Number of elements in the linklist are :"+iRet);
      
   }
}