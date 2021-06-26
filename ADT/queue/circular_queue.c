// FIFO
// data : storage, insertion end, deletion end

//remove/dequeue -> O(n)

#include <stdio.h>
#include <stdlib.h>

struct circularQueue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct circularQueue *q)
{
    if ((q->r + 1) % (q->size) == q->f)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct circularQueue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}

int dequeue(struct circularQueue *q)
{
    int re = -1; //default return for failure
    if (isEmpty(q))
        printf("empty\n");

    else
    {
        q->f = (q->f + 1) % (q->size);
        re = q->arr[q->f];
    }
    return re;
}

void enqueue(struct circularQueue *q, int val)
{
    if (isFull(q))
    {
        printf("full\n");
    }
    else
    {
        q->r = (q->r + 1) % (q->size);
        q->arr[q->r] = val;
        printf("Enqueuing %d\n", val);
    }
}

int main()
{
    struct circularQueue q;
    q.size = 4;
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));

    enqueue(&q, 12);
    enqueue(&q, 15);
    enqueue(&q, 15);
    enqueue(&q, 15);
    printf("Dequeuing %d\n", dequeue(&q));
    printf("Dequeuing %d\n", dequeue(&q));
    printf("Dequeuing %d\n", dequeue(&q));
    enqueue(&q, 15);
    return 0;
}
