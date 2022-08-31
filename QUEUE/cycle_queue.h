#ifndef _CYCLE_QUEUE_
    #define _CYCLE_QUEUE_
    #define CYCLE_QUEUE_SIZE 10
    #include <stdbool.h>
    #include "../global.h"
    typedef int elem;
    struct cycle_queue
    {
        elem array[CYCLE_QUEUE_SIZE];
        int start, finish;
    };
    typedef struct cycle_queue CYQUE;
    void QCY_init(CYQUE *s);
    bool QCY_EMPTY(CYQUE s);
    bool QCY_FULL(CYQUE s);
    bool QCY_enqueue(CYQUE *s, elem x);
    bool QCY_dequeue(CYQUE *s, elem *x);
#endif