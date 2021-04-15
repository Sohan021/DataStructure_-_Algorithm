#include <iostream>
using namespace std;

int queue[100], n=100, front = -1, rear = -1;

void Insert()
{
    int x;
    if(rear == n-1)
    {
        cout<<"Queue Overflow\n";
    }
    else
    {
        if(front == -1)
        {
            front = 0;
        }
        cout<<"Insert the element in queue : ";
        cin>>x;
        rear++;
        queue[rear] = x;
    }
}

void Delete()
{
    if(front == -1 || front > rear)
    {
        cout<<"Queue Underflow\n";
        return;
    }
    else
    {
        cout<<"Element deleted from queue is : "<< queue[front] <<endl;
        front++;
    }
}

void Display()
{
    if (front == - 1)
        cout<<"Queue is empty"<<endl;
    else
    {
        cout<<"Queue elements are : ";
        for(int i = front; i<=rear;i++)
        {
            cout<<queue[i]<<" ";
        }
        cout<<"\n";
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
