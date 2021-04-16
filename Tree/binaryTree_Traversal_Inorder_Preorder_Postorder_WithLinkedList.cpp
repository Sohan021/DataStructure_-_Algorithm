///Inorder Traversal ----> left root right
///Preorder Traversal ----> root left right
///Postorder Traversal ----> left right root

#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* new_node(int data)
{
    struct node* node = (struct node*)malloc(sizeof(struct node));

    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return node;
};


void in_order(struct node* node)
{
    if(node == NULL)
        return;

    in_order(node->left);
    cout<<node->data<<" ";
    in_order(node->right);
}

void pre_order(struct node* node)
{
    if(node == NULL)
        return;

    cout<<node->data<<" ";
    pre_order(node->left);
    pre_order(node->right);
}

void post_order(struct node* node)
{
     if(node == NULL)
        return;

     post_order(node->left);
     post_order(node->right);
     cout<<node->data<<" ";
}

int main()
{
    struct node* root = new_node(1);
    root->left = new_node(2);
    root->right = new_node(3);
    root->left->left = new_node(4);
    root->left->right = new_node(5);

    int x;
    char key;
    int parent;
    cout<<"1->InOrder Traverse\n2->PreOrder Traverse\n3->PostOrder Traverse\n\n";
    while(x!=0)
    {
        cout<<"Enter choice:";
        cin>>x;
        switch(x)
        {
        case 1:
            cout<<"InOrder: ";
            in_order(root);
            cout<<endl;
            break;
        case 2:
            cout<<"PreOrder: ";
            pre_order(root);
            cout<<endl;
            break;
        case 3:
            cout<<"PostOrder: ";
            post_order(root);
            cout<<endl;
            break;
        default:
            cout<<"Invalid Enter";
        }
    }
    return 0;
}
