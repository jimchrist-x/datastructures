#include "cycle_queue.h"


void QCY_init(CYQUE *s) {
    s->start=-1;
    s->finish=s->start;
}

bool QCY_EMPTY(CYQUE s)
{
    return s.finish==-1;
}
bool QCY_FULL(CYQUE s)
{
    return s.start==(s.finish-1)%CYCLE_QUEUE_SIZE;
}
bool QCY_enqueue(CYQUE *s, elem x)
{
    if (Q_FULL(*s))
        return FALSE;
    else {
        if (Q_EMPTY(*s)) {
            s->start=0;
            s->finish=s->start;
        }
        else 
            s->finish=(s->finish+1)%CYCLE_QUEUE_SIZE;

        s->array[s->finish]=x;
        return TRUE;
    }
}
bool QCY_dequeue(CYQUE *s, elem *x)
{
    if (Q_EMPTY(*s))
        return FALSE;
    *x=s->array[s->start];
    if (s->start == s->finish) {
        s->start=-1;
        s->finish=s->start;
    }
    else {
        s->start=(s->start+1)%CYCLE_QUEUE_SIZE;
        return TRUE;  
    }
}