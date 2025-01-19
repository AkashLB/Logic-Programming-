#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;

};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class SinglyLL
{
    public:
        PNODE head;
        int iCount;
        
        SinglyLL()
        {
            head = NULL;
            iCount = 0;
        }
        void InsertFirst(int no)
        {
            PNODE newn = NULL;

            newn = new NODE;
            newn -> data = no;
            newn -> next = NULL;

            if(head==NULL)
            {
                head = newn;
            }
            else
            {
                newn->next=head;
                head = newn; 
            }
            iCount++;
        }
        void InsertLast(int no)
        {
            PNODE temp = NULL;
            PNODE newn = NULL;

            newn = new NODE;
            newn -> data = no;
            newn -> next = NULL;

            if(head==NULL)
            {
                head = newn;
            }
            else
            {
                temp = head;

                while(temp->next !=NULL)
                {
                    temp = temp -> next;
                } 
                temp->next = newn;
            }
            iCount++;
        }
        void InsertAtPos(int no,int iPos){}
        void DeleteFirst()
        {
            PNODE temp = NULL;
            if(head == NULL)
            {

            }
            else if(head->next == NULL)
            {
               delete head;
               head = NULL;
            }
            else
            {
                 temp = head;

                 head = head -> next ;
                 delete temp;
            }
            iCount--;
        }
        void DeleteLast()
        {
            PNODE temp = NULL;

            if(head == NULL)
            {
                return;
            }
            else if(head->next == NULL)
            {
                delete head;
                head = NULL;
            }
            else
            {
                temp = head;

                while(temp->next->next != NULL)
                {
                    temp = temp -> next;
                }

                delete temp->next;
                temp->next = NULL;
            }
            iCount--;
        }
        void DeleteAtPos(int iPos){}
        void Display()
        {
            PNODE temp = head;

            cout<<"ELements of Linkedlist Are ;\n";

            while(temp !=NULL)
            {
                cout<<"| "<<temp->data<<"->";
                temp = temp->next;
            }
        
            cout<<"NULL\n";
        }
        int Count()
        {
            return iCount;
        }
};
int main()
{            
    int iRet = 0;                                                                                                                                                                                                                                                                                              
   SinglyLL Sobj;
//    Sobj.InsertFirst(51);
//    Sobj.InsertFirst(21);
//    Sobj.InsertFirst(11);

//    Sobj.Display();
//    iRet = Sobj.Count();
//    cout<<"count is "<<iRet;

   Sobj.InsertLast(101);
   Sobj.InsertLast(111);
   Sobj.InsertLast(121);
   Sobj.DeleteLast();
   


   Sobj.Display();
   iRet = Sobj.Count();
   cout<<"count is "<<iRet;

    return 0;
}