#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* create()
{
    int x;
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    cout<<"Enter value: [-1 for no node]"<<endl;
    cin>>x;
    if(x == -1)
    {
        return NULL;
    }
    new_node->data = x;
    cout<<"Enter the child left node: "<<endl;
    new_node->left = create();
    cout<<"Enter the child right node: "<<endl;
    new_node->right = create();
    return new_node;
};

int main()
{
    struct node* root;
    root = NULL;
    root = create();
}
