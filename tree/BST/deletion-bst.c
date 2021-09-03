/*
case 1 : delete leaf node
case 2 : delete non-leaf node a) non-root node : can be replaced with inorder pre or inorder post
                              b) root node : 
*/

#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

void inOrder(struct node *root)
{
    if (root != NULL)
    {
        //left subtree -> root -> right subtree
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

struct node *createNode(int data)
{
    struct node *n;                                 //creating a node pointer
    n = (struct node *)malloc(sizeof(struct node)); // allocating memory in heap
    n->data = data;
    n->left = NULL;
    n->right = NULL;

    return n; // return node
}

void insert(struct node *root, int key)
{
    struct node *prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if (key == root->data)
        {
            printf("Insertion of duplicate element is not allowed!!");
            return;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
            root = root->right;
    }

    struct node *new = createNode(key);
    if (key < prev->data)
    {
        prev->left = new;
    }
    else
        prev->right = new;
}

struct node *inOrderPredecessor(struct node *root)
{
    //right most child of left subtree
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}

struct node *deleteNode(struct node *root, int value)
{
    struct node *inPre;
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        free(root);
        return NULL;
    }
    if (value < root->data)
        root->left = deleteNode(root->left, value);

    else if (value > root->data)
        root->right = deleteNode(root->right, value);

    else
    {
        inPre = inOrderPredecessor(root);
        root->data = inPre->data;
        root->left = deleteNode(root->left, inPre->data);
    }

    return root;
}

int main()
{

    /*
                5
              /   \
             3     6
            /  \     
           1    4  
   */
    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    inOrder(p);
    deleteNode(p, 5);
    printf("\n");
    inOrder(p);

    //printf("%d", p->right->right->data);
    return 0;
}