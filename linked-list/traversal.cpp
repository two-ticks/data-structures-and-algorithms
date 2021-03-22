#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

// print contents of linked list starting from the given node
void printList(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    // allocate nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;     
    head->next = second; // link nodes 

    second->data = 2; 
    second->next = third;

    third->data = 3; 
    third->next = NULL;

    printList(head);

    return 0;
}

