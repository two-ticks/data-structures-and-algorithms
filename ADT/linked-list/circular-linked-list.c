#include <stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *head)
{
    struct Node * ptr = head;
    do{

        printf("%d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}
struct Node * insertAtFirst(struct Node *head, int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data =data;
    struct Node * p = head->next;
    while (p->next != head)
    {
        p = p->next;
    } 
    // p points to last node of circular linked list
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    // allocate memory in heap for linked list
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 17;
    head->next = second;

    second->data = 101;
    second->next = third;

    third->data = 112;
    third->next = fourth;

    fourth->data = 14;
    fourth->next = head;

head = insertAtFirst(head,80);
linkedListTraversal(head);

return 0;
}