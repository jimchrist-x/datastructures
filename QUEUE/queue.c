#include "queue.h"
void Q_init(QUEUE *s)
{
    s->finish=-1;
}
bool Q_EMPTY(QUEUE s)
{
    return s.finish=-1;
}
bool Q_FULL(QUEUE s)
{
    return s.finish=QUEUE_SIZE-1;
}
bool Q_enqueue(QUEUE *s, elem x)
{
    if (Q_FULL(*s))
        return FALSE;
    else {
        s->finish++;
        s->array[s->finish]=x;
        return TRUE;
    }
}
bool Q_dequeue(QUEUE *s, elem *x)
{
    if (Q_EMPTY(*s))
        return FALSE;
    else {
        *x=s->array[0];
        for (int i;i<s->finish;i++) {
            s->array[i]=s->array[i+1];
        }
        s->finish--;
        return TRUE;
    }
}