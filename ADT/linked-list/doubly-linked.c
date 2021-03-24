#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {

        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
void linkedListTraversalReverse(struct Node *ptr)
{
    while (ptr != NULL)
    {

        printf("%d\n", ptr->data);
        ptr = ptr->prev;
    }
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
    head->prev = NULL;

    second->data = 101;
    second->next = third;
    second->prev = head;

    third->data = 112;
    third->next = NULL;
    third->prev = second;

linkedListTraversal(head);
linkedListTraversalReverse(third); //third is last element

return 0;
}