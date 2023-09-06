#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct cll
{
    int info;  //takes numbers
    struct cll *next;
}CLL;

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

int main()
{
    int no;
    CLL* list = malloc(sizeof(CLL));
    list->next = NULL;
    int ele;
    scanf("%d",&no);
    if (no <= 0)
        return -1;
    CLL* temp = list;
    if (no == 1)
    {
        scanf("%d",&ele);
        temp->info = ele;
        temp->next = list;
        Display(list);
        return 0;

    }
    for (int i = 0; i < no; i++)  //circular linked list initiation
    {
        scanf("%d",&ele);
        temp->info = ele;
        if (i < (no-1))
            temp->next = malloc(sizeof(CLL));
        else
            temp->next = list;

        temp = temp->next;
    }

    temp = list;  //precautionary line

    CLL* tuple1 = malloc(sizeof(CLL));
    tuple1->next = NULL;
    CLL* tuple2 = malloc(sizeof(CLL));
    tuple2->next = NULL;
    CLL* temp1 = tuple1;
    CLL* temp2 = tuple2;

    if (no%2 == 0)  //even linked list
    {
        for (int i = 0; i < no/2; i++)  //first CLL
        {
            temp1->info = temp->info;
            temp = temp->next;
            
            if (i < ((no/2)-1))
            {
                temp1->next = malloc(sizeof(CLL));
                temp1 = temp1->next;
            }
            else
                temp1->next = tuple1; 
        }
        Display(tuple1);

        for (int i = no/2; i < no; i++)  //second CLL
        {
            temp2->info = temp->info;
            temp = temp->next;

            if (i < (no-1))
            {
                temp2->next = malloc(sizeof(CLL));
                temp2 = temp2->next;
            }
            else
                temp2->next = tuple2;
        }
        Display(tuple2);
    }
    
    else    //odd linked list
    {
        for (int i = 0; i < (no/2 + 1); i++)  //first CLL
        {
            temp1->info = temp->info;
            temp = temp->next;
            
            if (i < no/2)
            {
                temp1->next = malloc(sizeof(CLL));
                temp1 = temp1->next;
            }
            else
                temp1->next = tuple1; 
        }
        Display(tuple1);

        for (int i = (no/2 + 1); i < no; i++)  //seocnd CLL
        {
            temp2->info = temp->info;
            temp = temp->next;

            if (i < no-1)
            {
                temp2->next = malloc(sizeof(CLL));
                temp2 = temp2->next;
            }
            else
                temp2->next = tuple2;
        }
        Display(tuple2);
    }    
    printf("Original list: ");
    Display(list);
    return 0;
}
