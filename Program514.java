class node 
{
    public int data;
    public node next;
    public node prev;

    public node(int x)
    {
        data = x;
        next = null;
        prev = null;
    }
}

class DoublyLL
{
    public node head;
    public node tail;
    public int iCount;

    public DoublyLL()
    {
        head = null;
        tail = null;
        iCount = 0;
    }

    public void InsertFirst(int no)
    {
        node newn = new node(no);

        if((head == null) && (tail == null))
        {
           head = newn;
           tail = newn;
        }
        else
        {
            newn.next = head;
            head.prev = newn;
            head = newn;
        }
        tail.next = head;
        head.prev = tail;
        iCount++;
    }

    public void InsertLast(int no)
    {
        node newn = new node(no);

        if((head ==null) && (tail == null))
        {
            
           head = newn;
           tail = newn;
        }
        else
        {
            tail.next = newn;
            newn.prev = tail;
            tail = tail.next;

        }
        tail.next = head;
        head.prev = tail;
        iCount++;
    }
    public void Display()
    {
        node temp = null;
            if((head != null) && (tail != null))
            {
                System.out.println("Elements of the linklist Are :");
                 temp = head;
                do
                {
                    System.out.println("|"+temp.data+"|->");
                    temp = temp.next;
                    
                }while(head != tail.next);
            }
        
    }
    public int Count()
    {
        return iCount;
    }

    public void DeleteFirst()
    {
        if((head == null) && (tail == null))
        {
            return ;
        }
        else if(head == tail)
        {
            head = null;
            tail = null;
        }
        else
        {
            head = head.next;

            tail.next = head;
            head.prev = tail;
        }
        System.gc();
        iCount--;
    }
}

class Program514
{
    public static void main(String A[])
    {
       DoublyLL dobj = new DoublyLL();

       dobj.InsertFirst(51);
       dobj.InsertFirst(21);
       dobj.InsertFirst(11);

       dobj.InsertLast(101);
       dobj.InsertLast(111);
       dobj.InsertLast(121);

       dobj.DeleteFirst();

       dobj.Display();
       
    }
}