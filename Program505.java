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
  }
    
    public InsertLast(int no)
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
    }
}
class Program505
{
   public static void main(String Arg[])
   {
     
     SinglyLL sobj = new SinglyLL();

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);
      
   }
}