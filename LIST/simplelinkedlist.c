#include "simplelinkedlist.h"
void LL_init(LIST_PTR *head) {
    *head=NULL;
}
bool LL_empty(LIST_PTR head) {
    return head == NULL;
}
elem LL_data(LIST_PTR p) {
    return p->data;
}
bool LL_insert_start(LIST_PTR *head, elem x) {
    LIST_PTR newnode;
    newnode=(LIST_NODE *)malloc(sizeof(LIST_NODE));
    if (!newnode) {
        printf("Error allocating memory!");
        return FALSE;
    }
    newnode->data=x;

    newnode->next=*head;
    *head=newnode;
    return TRUE;
}
bool LL_insert_after(LIST_PTR p, elem x) {
    LIST_PTR newnode;
    newnode=malloc(sizeof(LIST_NODE));
    if (!newnode)
    {
        printf("Error allocating memory!");
        return FALSE;
    }
    newnode->data=x;
    newnode->next=p->next;
    p->next=newnode;
    return TRUE;
}
bool LL_delete_start(LIST_PTR *head, elem *x) {
    LIST_PTR current;

    if(*head==NULL)
        return FALSE;
    else 
    {
        current=*head;
        *x=current->data;
        *head=(*head)->next;
        free(current);
        return TRUE;
    }
}
bool LL_delete_after(LIST_PTR prev, elem *x)
{
    LIST_PTR current;
    if (prev->next==NULL)
        return FALSE;
    else 
    {
        current=prev->next;
        *x=current->data;
        prev->next=current->next;
        free(current);
        return TRUE;
    }
}
void LL_destroy(LIST_PTR *head)
{
    LIST_PTR ptr;
    while (*head!=NULL)
    {
        ptr=*head;
        *head=(*head)->next;
        free(ptr);
    }
}
void LL_print(LIST_PTR head)
{
    LIST_PTR current;
    current=head;
    while (current!=NULL)
    {
        printf("%d ", current->data);
        current=current->next;
    }
}