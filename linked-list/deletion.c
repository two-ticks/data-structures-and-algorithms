#include <stdio.h>

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

struct Node * deleteFirst(struct Node * head){
    
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;    
}
// delete by index
struct Node * deleteAtIndex(struct Node * head, int index){
    
    struct Node * p = head;
    struct Node * q = head->next;
    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;    
}

struct Node * deleteLast(struct Node * head){
    
    struct Node * p = head;
    struct Node * q = head->next;
    while(q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;    
}

// delete element with a given value
struct Node * deleteByValue(struct Node * head, int value){
    
    struct Node * p = head;
    struct Node * q = head->next;
    while (q->data != value && q->next !=NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }

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

//head = deleteFirst(head); //delete first element of linked list
//linkedListTraversal(head);

//head = deleteAtIndex(head,1); //delete given index element of linked list
//linkedListTraversal(head);

//head = deleteLast(head); //delete last element of linked list
//linkedListTraversal(head);

head = deleteByValue(head,112); //delete by value of element of linked list
linkedListTraversal(head);

return 0;
}