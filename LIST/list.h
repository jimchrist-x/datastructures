#ifndef _LIST_
    #define _LIST_
    #include "global.h"
    #include <stdbool.h>

    #define LIST_SIZE 10
    typedef int elem;
    typedef struct list LIST;
    struct list
    {
        elem data[LIST_SIZE];
        int N;
    };
    void SL_init(LIST *l);
    bool SL_empty(LIST l);
    bool SL_insert(LIST *l, int ind, elem x);
    bool SL_delete(LIST *l, int ind, elem *x);
#endif