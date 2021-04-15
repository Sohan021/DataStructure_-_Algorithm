#include <bits/stdc++.h>
using namespace std;

struct Node {
   int data;
   struct Node *next;
};

struct Node* front = NULL;
struct Node* rear = NULL;
struct Node* temp;

void Insert()
{
    int x;
    cout<<"Insert the element in queue : ";
    cin>>x;
    if(rear == NULL)
    {
        rear = (struct Node* )malloc(sizeof(struct Node));
        rear->next=NULL;
        rear->data=x;
        front = rear;
    }
    else
    {
        temp = (struct Node* )malloc(sizeof(struct Node));
        rear->next=temp;
        temp->data=x;
        temp->next=NULL;
        rear=temp;
    }
}

void Delete()
{
    temp = front;
    if(front == NULL)
    {
        cout<<"Underflow"<<endl;
        return;
    }
    else
    {
        if(temp->next != NULL)
        {
            temp = temp->next;
            cout<<"Element deleted from queue is : "<<front->data<<endl;
            free(front);
            front = temp;
        }
        else
        {
            cout<<"Element deleted from queue is : "<<front->data<<endl;
            free(front);
            front = NULL;
            rear = NULL;
        }
    }
}

void Display()
{
    temp=front;
    if ((front == NULL) && (rear == NULL)) {
      cout<<"Queue is empty"<<endl;
      return;
   }
   cout<<"Queue elements are: ";
   while(temp != NULL)
   {
       cout<<temp->data<<" ";
       temp = temp->next;
   }
   cout<<"\n";
}

int main()
{
    int ch;
    cout<<"Enter Choice: 1->Insert(Enqueue) 2->Delete(Dequeue) 3->Display \n";
    while(ch!=0)
    {
        cout<<"Enter choice: ";
        cin>>ch;
        switch(ch)
        {
        case 1:
        {
            Insert();
            break;
        }
        case 2:
        {
            Delete();
            break;
        }
        case 3:
        {
            Display();
            break;
        }
        case 4:
        {
            cout<<"Exit"<<endl;
            break;
        }
        default:
        {
            cout<<"Invalid Choice"<<endl;
        }
        }
    }
    return 0;
}
