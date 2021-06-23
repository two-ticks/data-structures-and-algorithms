// FIFO
// data : storage, insertion end, deletion end

//remove/dequeue -> O(n)

#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}

int dequeue(struct queue *q)
{
    int re = -1; //default return for failure
    if (isEmpty(q))
        printf("empty");

    else
    {
        q->f++;
        re = q->arr[q->f];
    }
    return re;
}

void enqueue(struct queue *q, int val)
{
    if (isFull(q))
    {
        printf("full");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
    }
}

int main()
{
    struct queue q;
    q.size = 100;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));

    if (isEmpty(&q))
        printf("empty\n");
    enqueue(&q, 12);
    enqueue(&q, 15);
    printf("Dequeuing %d\n", dequeue(&q));
    return 0;
}
