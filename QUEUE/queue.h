/* O(n) */
#ifndef _QUEUE_
    #define _QUEUE_
    #define QUEUE_SIZE 10
    #include <stdbool.h>
    #include "../global.h"
    typedef int elem; // data type of struct
    struct queue
    {
        elem array[QUEUE_SIZE];
        int finish;
    };
    typedef struct queue QUEUE;
    void Q_init(QUEUE *s); // Initializes queue
    bool Q_EMPTY(QUEUE s); // Checks wether queue is empty
    bool Q_FULL(QUEUE s); // Checks wether queue is full
    bool Q_enqueue(QUEUE *s, elem x); // Pushes elem into queue
    bool Q_dequeue(QUEUE *s, elem *x); // Pops elem from queue
#endif