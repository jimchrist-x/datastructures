#ifndef _DOUBLE_LINKED_LIST_
    #define _DOUBLE_LINKED_LIST_
    #include "../global.h"
    #include <stdbool.h>
    #include <stdlib.h>
    typedef int elem;
    struct d_node {
        elem data;
        struct d_node *next;
        struct d_node *previous;  
    };
    typedef struct d_node DLIST_NODE;
    typedef struct d_node DLIST_PTR;
    void DLL_init(DLIST_PTR *head);
    bool DLL_EMPTY(DLIST_PTR head);
    bool DLL_insert_start(DLIST_PTR *head, elem x);
    bool DLL_insert_after(DLIST_PTR *head, elem x);
    bool DLL_delete_start(DLIST_PTR *head, elem *x);
    bool DLL_delete_after(DLIST_PTR previous, elem *x)
#endif