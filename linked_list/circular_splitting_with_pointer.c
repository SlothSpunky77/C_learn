#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct cll
{
    int info;
    struct cll *next;
}CLL;

typedef struct node
{
    CLL *head;
    CLL *current;
    CLL *tail;
}NODE;

//Display function for circular linked list
void Display(CLL* list)
{
    CLL* head = list;
    while (list != NULL)
    {
        printf("%d ",list->info);
        list = list->next;
        if (list == head)
        {
            printf("\n");
            break;
        }
    }
}

//Special display function for pointers to circular linked list
void pointerDisp(NODE* pointer)
{
    pointer->current = pointer->head;
    while (pointer->current != pointer->tail)
    {
        printf("%d ",pointer->current->info);
        pointer->current = pointer->current->next;
    }
    printf("%d ",pointer->current->info);
    printf("\n");
}

int main()
{
    int nos;
    CLL* circular = malloc(sizeof(CLL));
    printf("Enter the number of nodes: ");
    scanf("%d",&nos);
    
    printf("Enter the elements: \n");
    CLL* temp = circular;
    int element;
    for (int i = 0; i < nos; i++)
    {
        scanf("%d",&element);
        temp->info = element;
        if (i < (nos-1))
            temp->next = malloc(sizeof(CLL));
        else
            temp->next = circular;
        temp = temp->next;
    }

    NODE* pointer1 = malloc(sizeof(NODE));
    NODE* pointer2 = malloc(sizeof(NODE));

    //even number of nodes

    /* int on = 0; //this will act as a switch and will assume the value of 1 if the midpoint of the loop is reached */
    
    temp = circular;
    pointer1->head = circular;
    for (int i = 0; i < (nos/2)-1; i++)
    {
        temp = temp->next;
    }
    pointer1->tail = temp;
    temp = temp->next;

    pointer2->head = temp;
    for (int i = (nos/2)+1; i < nos; i++)  
    {
        temp = temp->next;
    }
    pointer2->tail = temp;

    temp = temp->next;  //back to circular

    pointerDisp(pointer1);
    pointerDisp(pointer2);
    return 0;
}
