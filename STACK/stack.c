#include "stack.h"
void ST_init(STACK *s) {
    s->top=-1;
}
bool ST_EMPTY (STACK s) {
    return s.top==-1;
}
bool ST_FULL (STACK s) {
    return s.top==STACK_SIZE-1;
}
bool ST_PUSH(STACK *s, elem x) {
    if (ST_FULL(*s))
        return FALSE;
    else
    {
        s->top++;
        s->array[s->top]=x;
        return TRUE;
    } 
}
bool ST_POP(STACK *s, elem *x)
 {
    if (ST_EMPTY(*s))
        return FALSE;
    else
    {
        *x=s->array[s->top];
        s->top--;
        return TRUE;
    }
 }