//Reverse a linked list recursively
//Test case : 1-> 2 -> 3 -> 4
#include <stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node* next;
}

void insert(struct node** head, int data)
{
    struct node* newn = (struct node*) malloc(sizeof(struct node));
    newn->data = data;
    newn->next = NULL;

    if(head == NULL)
    {
        head = newn;
    }
    else 
    {
        struct node* temp = head;
        while(temp->next != NULL)
        {
            temp =temp->next;
        }
        temp->next = newn;
    }
}

void display(struct node** head)
{
    struct node* temp = head;
    while(temp->next!=NULL)
    {
        printf()
    }
}


void main()
{
    struct node* head = NULL;
    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);
    insert(&head, 4);
    printf("Before Reversal \n");
    display(&head);
    reverse(&head);
    printf("After Reversal \n");
    display(&head);
}