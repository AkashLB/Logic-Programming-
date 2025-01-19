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

class Queue
{
    public node head;
    public int iCount;

    public Queue()
    {
        this.head = null;
        this.iCount = 0;
    }
  
    public void Enqueue(int no)
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
    
    
    public void Display()
    {
        System.out.println("Elements of the Stack are :");
        
        node temp = head;
        while(temp != null)
        {
            System.out.print(" "+temp.data+" ");
            temp = temp.next;
        }
        System.out.println("null");
    }
    public int Count()
    {
        return iCount;
    }
    public int Dequeue()
    {

        int no = 0;
        if(head == null)
        {
            System.out.println("Stack is empty");
            return -1;
        }
        else if(head.next == null)
        {
            no = head.data;
           head = null;    
        }

        else
        {
            node temp = head;
            while(temp.next.next != null)
            {
                temp = temp.next;
            }
            no = temp.data;
            temp.next = null;
        }
        System.gc();
        iCount--;
        return no;
    }
   
}
class Program512
{
   public static void main(String Arg[])
   {
     int iRet = 0;
     Queue sobj = new Queue();

    sobj.Enqueue(111);
    sobj.Enqueue(101);
    sobj.Enqueue(51);
    sobj.Enqueue(21);
    sobj.Enqueue(11);


    sobj.Display();
    iRet = sobj.Count();

    System.out.println("Number of elements in the linklist are :"+iRet);

     sobj.Dequeue();
     sobj.Dequeue();
    
    sobj.Display();
    iRet = sobj.Count();

    System.out.println("Number of elements in the linklist are :"+iRet);
      
   }
}