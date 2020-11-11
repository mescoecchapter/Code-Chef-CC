#include<iostream>
using namespace std;

class node
{
   public:
          
        int data;
        node* next;
        
};

class linkedlist
{
    public:
    
     node* head = NULL;

     void display();
     void insert_end(int num);
     void create_loop();
     void remove_loop_floyd();

};


void linkedlist :: insert_end(int num)
{
     node* newnode = new node();
     newnode->data = num;
     newnode->next = NULL;

     if(head == NULL)
         head = newnode;
     else
     {
         node* curr = head;
         while(curr->next!= NULL)
         {
             curr = curr->next;
         }
         curr->next =newnode;
     }
}



void linkedlist :: display()
{
     node* curr = head;

      while(curr != NULL)
      {
          cout<<curr->data<<" ";
          curr = curr->next;
      }
      cout<<endl;
}

void linkedlist :: create_loop()
{
    node* curr = head;

    if(head==NULL ||  head->next==NULL)
    {
      cout<<"cannot form loop\n";
      return;
    }

    while(curr->next!=NULL)
    {
        curr = curr->next;
    }
    curr->next = head->next;
    cout<<"loop created\n";
       
   
}



void linkedlist :: remove_loop_floyd()
{
     node* slow = head;
     node* fast = head;

     while(slow && fast && fast->next)  //slow!=NULL
     {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast)
            {
                cout<<"loop exist\n";
                break;
                
            }

     }
     if(slow==fast)
     {
        slow = head;
        while(slow->next!=fast->next)
        {
            slow = slow->next;
            fast = fast->next;
        }
        cout<<"loop found at:"<<slow->next->data<<endl;
        fast->next = NULL;
        cout<<"loop removed\n";
        return;
     }

     cout<<"no loops exists\n";



}


int main()
{
    linkedlist l1;

    l1.insert_end(10);
    l1.insert_end(20);
    l1.insert_end(30);
    l1.insert_end(40);
    l1.insert_end(50);
    l1.insert_end(60);
    l1.insert_end(70);
    
    l1.display();
    l1.create_loop();
    l1.remove_loop_floyd();
    l1.display();


    
    return 0;
}
