#include "list.h"
void SL_init(LIST *l)
{
    l->N=0;
}
bool SL_empty(LIST l)
{
    return l.N==0;
}
bool SL_insert(LIST *l, int ind, elem x)
{
    if (ind<0 || ind>l->N)
        return FALSE;
    
    if (l->N < SIZE) {
        for (int i=l->N;i>ind;i--)
            l->data[i]=l->data[i-1];
        l->data[ind]=x;
        l->N++;
        return TRUE;
    }
    else
        return FALSE;
}
bool SL_delete(LIST *l, int ind, elem *x)
{
    if (ind<0 || ind>l->N)
        return FALSE;
    
    *x=l->data[ind];
    for (int i=ind;i<l->N;i++)
        l->data[i]=l->data[i+1];
    l->N--;
    return TRUE;
}