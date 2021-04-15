#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;

void Push()
{
    int x;
    cout<<"Enter Value: ";
    cin>>x;

    struct Node* new_node =(struct Node*) malloc(sizeof(struct Node));

    new_node->data = x;
    new_node->next = top;
    top = new_node;
}

void Pop()
{

    if(top == NULL)
    {
        cout<<"Stuck is Underflow:";
    }
    else{
        cout<<"The popped element is "<<top->data<<endl;
        top = top->next;
    }
}

void Display()
{
    struct Node* p;
    if(top == NULL)
    {
        cout<<"Stuck is Empty:";
    }
    else{
        p = top;
        while(p != NULL){
            cout<<p->data<<" ";
            p = p->next;
        }
    }
    cout<<"\n";
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
