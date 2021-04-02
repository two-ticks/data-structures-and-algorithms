#include<stdio.h>
#include<stdlib.h>

struct Node {
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

int isEmpty(struct Node* top){
    if(top == NULL)
    {
        return 1;
    }

    return 0;
}

int isFull(struct Node* top){
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    if(p == NULL)
    {
        return 1;
    }
    
    return 0;
}

struct Node* push(struct Node*top, int x){
    if(isFull(top)){
            printf("overflow");
    }
    else
    {
        struct Node* n = (struct Node*)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }    
}

int pop(struct Node* *top)
{
    if (isEmpty(top))
    {
        printf("Stack Underflow");
        return -1;
    }
    else
    {
        struct Node* n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
}


int main(){

    struct Node * top = NULL;
    top = push(top, 58);
    top = push(top, 68);
    top = push(top, 708);
    top = push(top, 78);
    int element = pop(&top); // can also be done with global variable
    printf("popped: %d\n", element);
    linkedListTraversal(top);

return 0;
}

