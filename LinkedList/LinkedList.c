#include <stdio.h>
#include <stdlib.h>


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

    printf(" ----> %d \n\n\n", size);

    printf(" ----> %d \n", head);
    printf(" ----> %d \n", second);
    printf(" ----> %d \n\n\n", third);

    head->data=1;
    second->data=2;
    third->data=3;

    head->next=second;
    second->next=third;
    third->next=NULL;

    printList(head);
}
