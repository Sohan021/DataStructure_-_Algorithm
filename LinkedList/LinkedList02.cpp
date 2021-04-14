#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

void printList(struct Node* n)
{
    while(n != NULL)
    {
        printf("Data: %d Address: %d \n", n->data, n->next);

        n= n->next;
    }
}

int main()
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    int size = sizeof(struct Node);

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    cout<<"Size Of Struct ----> "<<size<<"\n\n"<<endl;

    printf(" ----> %d \n", head);
    printf(" ----> %d \n", second);
    printf(" ----> %d \n\n\n", third);

    cout<<" ----> "<<head<<endl;
    cout<<" ----> "<<second<<endl;
    cout<<" ----> "<<third<<"\n\n"<<endl;

    head->data=1;
    second->data=2;
    third->data=3;

    head->next=second;
    second->next=third;
    third->next=NULL;

    printList(head);
}
