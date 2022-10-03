#include<iostream>
using namespace std;

struct node
{
    string student ;
    struct node* next;
};


class Queue
{
    private:
    struct node* head;
    public:
    Queue()
    {
        head = NULL;
    }
   bool  isEmpty()
   {
    if(head == NULL)
    {
      return true;
    }
    else
    return false;
   }
    void Enqueue( string name)
    {
      struct node* stu = new node();
      stu ->student = name;
      stu ->next = NULL;
      if(head == NULL)
      {
        head = stu;
      }
      else
      {
        struct node* temp = getLastRecord(head);
        cout<<temp ->student;
        temp ->next = stu;
      }
    }

    string Dequeue()
    {
        if(isEmpty())
        {
            return "Empty";
        }
        struct node* temp = head;
        head = head ->next;
        return temp->student;

    }

   struct node* getLastRecord( struct node* temp)
   {
    while (temp -> next != NULL)
    {
        temp = temp->next;
    }
    return temp;
   }


};


int main()

{
    int opt;
    Queue q;
    while(true)
    {

    cout <<"1. Enqueue " << endl;
    cout <<"2. Dequeue " << endl;
    cin>>opt;
    system("cls");
    if( opt == 1)
    {
        cout<<" enter student name" <<endl;
        string name;
        cin>>name;
        q.Enqueue( name );

    }
    else if( opt == 2)
    {
      string data =  q.Dequeue();
      cout << data << endl;
    }

    }
    

}