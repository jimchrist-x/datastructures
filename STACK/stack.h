#ifndef _STACK_
    #define _STACK_
    #define STACK_SIZE 10
    #include <stdbool.h>
    #include "../global.h"
    typedef int elem; // data type of struct
    struct stack
    {
        elem array[STACK_SIZE];
        int top;
    };
    typedef struct stack STACK;
    void ST_init(STACK *s); // Initializes stack
    bool ST_EMPTY (STACK s); // Checks wether stack is empty
    bool ST_FULL (STACK s); // Checks wether stack is full
    bool ST_PUSH(STACK *s, elem x); // Pushes elem into stack
    bool ST_POP(STACK *s, elem *x); // Pops elem from stack
#endif