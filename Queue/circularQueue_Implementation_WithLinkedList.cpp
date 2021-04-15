#include <bits/stdc++.h>
using namespace std;

struct Node
{
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

    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data=x;
    new_node->next = NULL;

    if(rear == NULL)
    {
        front = rear = new_node;
        rear->next=front;
    }
    else
    {
        rear->next=new_node;
        rear=new_node;
        rear->next=front;
    }

}

void Delete()
{
    temp = front;

    if(front == NULL && rear == NULL)
    {
        cout<<"Queue id empty\n";
    }
    else if(front == rear)
    {
        front = rear = NULL;
        free(temp);
    }
    else
    {
        cout<<"Dequeue element is :"<<temp->data<<endl;
        front=front->next;
        rear->next=front;
        free(temp);
    }
}

void Display()
{
    temp = front;

    if(front == NULL && rear == NULL)
    {
        cout<<"Queue id empty\n";
    }
    else
    {
        while(temp->next != front)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<temp->data<<" ";
        cout<<endl;
    }
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

