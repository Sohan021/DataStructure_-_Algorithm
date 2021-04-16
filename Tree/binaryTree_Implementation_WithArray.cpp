/*  when first index = 0 [i=0]
    node it at ith index:
    left child would be at : [(2*i)+1]
    right child would be at : [(2*i)+2]
    parent would be at : [(i-1)/2]
    *** null node must be initialize with NULL;
*/

#include<bits/stdc++.h>
using namespace std;

char tree[10];

int root_node(char key)
{
    if(tree[0] != '\0')
        cout<<"Already had Root"<<endl;
    else
        tree[0] = key;
    return 0;
}
int left_child(char key, int parent)
{
    if(tree[parent] == '\0')
    {
        cout <<"\nCan't set child at Position:"<<(parent * 2) + 1<<",no parent found";
    }
    else
    {
        tree[(parent*2)+1] = key;
    }
    return 0;
}
int right_child(char key, int parent)
{
    if(tree[parent] == '\0')
    {
        cout <<"\nCan't set child at Position:"<<(parent * 2) + 2<<", no parent found";
    }
    else
    {
        tree[(parent*2)+2] = key;
    }
    return 0;
}

int traverse_tree()
{
    cout<<endl;
    for(int i = 0; i<10; i++)
    {
        if(tree[i] != '\0')
            cout<<tree[i];
        else
            cout<<"-";
    }
}

int main()
{
    int x;
    char key;
    int parent;
    cout<<"1->Enter root key\n2->Enter Left Child\n3->Enter Right Child\n4->Traverse Tree\n\n";

    while(x!=0)
    {
        cout<<"Enter choice:";
        cin>>x;
        ///cout<<endl;
        switch(x)
        {
        case 1:
            cout<<"Enter Root Key: ";
            cin>>key;
            cout<<endl;
            root_node(key);
            break;
        case 2:
            cout<<"Enter Left Key: ";
            cin>>key;
            cout<<"Enter Parent: ";
            cin>>parent;
            cout<<endl;
            left_child(key, parent);\
            break;
        case 3:
            cout<<"Enter Right Key: ";
            cin>>key;
            cout<<"Enter Parent: ";
            cin>>parent;
            cout<<endl;
            right_child(key, parent);
            break;
        case 4:
            traverse_tree();
            cout<<endl;
            break;
        default:
            cout<<"Invalid Enter";
        }
    }


    ///root_node('A');
    ///right_child('C', 2);
    ///left_child('D', 0);
    ///right_child('E', 1);
    ///right_child('F', 2);
    ///traverse_tree();
    return 0;

}
