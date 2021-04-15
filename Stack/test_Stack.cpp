#include <iostream>
using namespace std;

int stack[100], n=100, top=-1;

void Push()
{
    int x;
    cout<<"Enter Value: ";
    cin>>x;

    if(top>=n-1)
        cout<<"Stack Overflow"<<endl;
    else
    {
        top++;
        stack[top]=x;
    }
}
void Pop()
{
    if(top<=-1)
        cout<<"Stack Underflow"<<endl;
    else
    {
        cout<<"The popped element is "<< stack[top] <<endl;
        top--;
    }
}
void Display()
{
    if(top>=0)
    {
        cout<<"Stack elements are:";
        for(int i=top; i>=0; i--)
            cout<<stack[i]<<" ";
        cout<<endl;
    }
    else
        cout<<"Stack is empty\n";
}
int main()
{
    int ch;
    cout<<"Enter Choice: 1->Push 2->Pop 3->Display \n";

    while(ch!=0)
    {
        cout<<"Enter choice: ";
        cin>>ch;
        switch(ch)
        {
        case 1:
        {
            Push();
            break;
        }
        case 2:
        {
            Pop();
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
