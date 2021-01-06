#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    struct Node *prevAddress;
    int data;
    struct Node *nextAddress;
} node;

node *addAtBeg( node *head ,int data )
{
    node *temp = malloc(sizeof(node));
    temp->prevAddress = NULL;
    temp->nextAddress = NULL;
    temp->data = data;
    temp->nextAddress = head;
    head = temp;

    return temp;
}

void addAtEnd( node *head ,int data )
{
    node *temp = malloc(sizeof(node));
    temp->prevAddress = NULL;
    temp->nextAddress = NULL;
    temp->data = data;
    
    node *ptr = head;

    while(ptr->nextAddress != NULL)
    {
        ptr = ptr->nextAddress;
    }

    ptr->nextAddress  = temp;
    temp->prevAddress = ptr;
}

void addAtPos( node *head ,int data ,int position )
{
    
    node *temp = malloc(sizeof(node));
    temp->prevAddress = NULL;
    temp->nextAddress = NULL;
    temp->data = data;

    int index = 1;
    node *ptr = head;

    while(index < position -1 )
    {
        index++;
        ptr = ptr->nextAddress;
    }
    // printf("%d",index);
    temp->prevAddress = ptr;
    temp->nextAddress = ptr->nextAddress;
    ptr->nextAddress->prevAddress = temp;
    ptr->nextAddress  = temp;

}

node *delAtBeg( node *head)
{
    node *temp = head;
    head = head->nextAddress;
    head->nextAddress->prevAddress = head;
    
    free(temp);

    return head;
}

void delAtEnd( node *head)
{
    node * ptr = head;

    while(ptr->nextAddress->nextAddress != NULL)
    {
        ptr = ptr->nextAddress;
    }

    ptr->nextAddress->prevAddress = NULL;

    free(ptr->nextAddress);
    ptr->nextAddress = NULL; 
}

void delAtPos( node *head ,int position )
{
    node *ptr = head;
    node *temp;
    int index = 1;
    while( index <= position-1)
    {
        index++;
        temp = ptr;
        ptr = ptr->nextAddress;
    }
    
    temp->nextAddress = ptr->nextAddress;
    ptr->nextAddress->prevAddress = temp;
    free(ptr);
}

void printList( node *head )
{
    node *ptr = head;

    int index = 1;
    while( ptr != NULL)
    {
        printf("%d. %d\n" ,index++ ,ptr->data);
        ptr=ptr->nextAddress;
    }
}

node *reverse(node *head)
{
    node *ptr = head;
    node *ptR = head->nextAddress;

    ptr->nextAddress = NULL;
    ptr->prevAddress = ptR;

    while( ptR != NULL)
    {
        ptR->prevAddress = ptR->nextAddress;
        ptR->nextAddress = ptr;
        ptr = ptR;
        ptR = ptR->prevAddress;
    }
    head = ptr;

    return head;
}

int main()
{
    node *head;

    node *temp = (node *)malloc(sizeof(node *));
    temp->prevAddress = NULL;
    temp->nextAddress = NULL;
    temp->data = 0;
    head = temp;


    addAtEnd(head ,1);
    addAtEnd(head ,2);
    addAtEnd(head ,3);
    addAtEnd(head ,4);
    addAtEnd(head ,5);
    addAtEnd(head ,6);
    addAtEnd(head ,7);
    head = addAtBeg(head ,100);
    addAtPos(head ,101 ,3);
    head = delAtBeg(head);
    delAtEnd(head);
    delAtPos(head ,2);
    printList(head);
    reverse(head);
    printList(head);
    printf("done");

}