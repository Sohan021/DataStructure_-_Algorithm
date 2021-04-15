#include<bits/stdc++.h>
using namespace std;
int cqueue[5];
int n=5, front = -1, rear = -1;

void Insert()
{
    int x;
    cout<<"Insert the element in queue : ";
    cin>>x;

    if(front == -1 && rear == -1)
    {
        front = rear = 0;
        cqueue[rear] = x;
    }
    else if((rear+1)%n == front)
    {
        cout<<"Overflow Queue\n";
    }
    else
    {
        rear = (rear+1)%n;
        cqueue[rear] = x;
    }
}
void Delete()
{
    if(front == -1 && rear == -1)
    {
        cout<<"Queue is empty\n";
    }
    else if(front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        cout<<"Dequeue element is :"<<cqueue[front]<<endl;
        front = (front+1)%n;
    }
}
void Display()
{
    int i = front;
    if(front == -1 && rear == -1)
    {
        cout<<"Queue is empty\n";
    }
    else
    {
        cout<<"Queue is: ";
        while(i != rear)
        {
            cout<<cqueue[i]<<" ";
            i = (i+1)%n;
        }
        cout<<cqueue[rear];
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


