#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {

        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node * insertAtFirst(struct Node * head,int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    
    return ptr;
}

struct Node * insertAtEnd(struct Node * head,int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;

    return head;
}

// insert between
struct Node * insertAtIndex(struct Node * head, int data,int index){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 0 ;
    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    // allocate memory in heap for linked list
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 17;
    head->next = second;

    second->data = 101;
    second->next = third;

    third->data = 112;
    third->next = NULL;

//linkedListTraversal(head);

//head  = insertAtFirst(head, 56);
//head  = insertAtIndex(head, 56, 1);
head  = insertAtEnd(head, 56);
linkedListTraversal(head);
return 0;

}