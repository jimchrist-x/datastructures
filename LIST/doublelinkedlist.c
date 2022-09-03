void DLL_init(DLIST_PTR *head)
{
    *head=NULL;
}
bool DLL_EMPTY(DLIST_PTR head)
{
    return head==NULL;
}
bool DLL_insert_start(DLIST_PTR *head, elem x)
{
    LIST_PTR newnode;
    newnode=(LIST_NODE *)malloc(sizeof(LIST_NODE));
    if (!newnode) {
        printf("Error allocating memory!");
        return FALSE;
    }
    newnode->data=x;
    newnode->next=*head;
    newnode->previous=NULL;
    if (newnode->next!=NULL)
        newnode->next->prev=newnode;
    return TRUE;
}
bool DLL_insert_after(DLIST_PTR p, elem x)
{
    LIST_PTR newnode;
    newnode=(LIST_NODE *)malloc(sizeof(LIST_NODE));
    if (!newnode) {
        printf("Error allocating memory!");
        return FALSE;
    }
    newnode->data=x;
    newnode->next=p->next;
    newnode->previous=p;
    p->next=newnode;
    if (newnode->next!=NULL)
        newnode->next->prev=newnode;
    return TRUE;
}
bool DLL_delete_start(DLIST_PTR *head, elem *x)
{
    LIST_PTR current;
    if (*head==NULL)
        return FALSE;
    current=*head;
    *x=current->data;
    (*head)=(*head)->next;
    if ((*head)!=NULL)
        (*head)->previous=NULL;
    free(current);
    return TRUE;
}
bool DLL_delete_after(DLIST_PTR previous, elem *x)
{
    LIST_PTR current;
    if (previous->next==NULL)
        return FALSE;
    current=previous->next;
    *x=current->data;
    previous->next=current->next;
    if (current->next!=NULL)
        current->next->prev=previous;

    free(current);
    return TRUE;
}
void DLL_destroy(LIST_PTR *head)
{
    LIST_PTR ptr;

    while (*head!=NULL) {
        ptr=*head;
        *head=(*head)->next;
        free(ptr);
    }
}