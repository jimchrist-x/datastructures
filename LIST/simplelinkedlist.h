#ifndef _SIMPLE_LINKED_LIST_
    #define _SIMPLE_LINKED_LIST_
    #include "../global.h"
    #include <stdbool.h>
    #include <stdlib.h>
    typedef int elem;
    struct node
    {
        elem data;
        struct node *next;
    };
    typedef struct node LIST_NODE;
    typedef struct node *LIST_PTR;
    void LL_init(LIST_PTR *head);
    bool LL_empty(LIST_PTR head);
    bool LL_insert_start(LIST_PTR *head, elem x);
    bool LL_insert_after(LIST_PTR p, elem x);
    bool LL_delete_start(LIST_PTR *head, elem *x);
    bool LL_delete_after(LIST_PTR prev, elem *x);
    void LL_destroy(LIST_PTR *head);
    elem LL_data(LIST_PTR p);
#endif