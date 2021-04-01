#include<stdio.h>

struct Node {
    int data;
    struct Node *next;

};

void push(struct Node*top, int x){
    if(isFull){
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

void isEmpty(struct Node* top){
    if(top == NULL)
    {
        return 1;
    }

    return 0;
}

void isFull(struct Node* top){
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    if(p == NULL)
    {
        return 1;
    }
    
    return 0;
}


int main(){

struct Node * top = NULL;

//push(top, 78);
return 0
}