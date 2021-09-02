//pre-order: root-> left subtree -> right subtree
//post-order : left subtree -> right subtree -> root
//in-order : left subtree -> root -> right subtree

//post-order
//left subtree -> right subtree -> root

/*
                4
              /   \
             1     6
            /  \     
           5    2  

        [[[5 2] 1] 6] 4  
*/

#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *n;                                 //creating a node pointer
    n = (struct node *)malloc(sizeof(struct node)); // allocating memory in heap
    n->data = data;
    n->left = NULL;
    n->right = NULL;

    return n; // return node
}

void postOrder(struct node *root)
{
    if (root != NULL)
    {
        //left subtree -> right subtree -> root
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}

int main()
{
    struct node *p = createNode(4);
    struct node *p1 = createNode(1);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(5);
    struct node *p4 = createNode(2);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    postOrder(p);

    return 0;
}
