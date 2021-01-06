#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *address;
} node;

//=========================== BASIC OPERATIONS TO BE PERFORMED ON LINKEDLIST ========================
/*
Function to add new node at an end of the linkedList
addAtLast( head_node ,data_to_be_added )
*/
void addAtLast(node * head ,int data)
{
    node *temp = malloc(sizeof(node *));

    temp->data = data;
    temp->address = NULL;

    node *ptr = head;
    while( ptr->address != NULL)
        ptr = ptr->address;
    
    ptr->address = temp;

}

/*
Function to add new node at begining of the linkedList
addAtStart( head_node ,data_to_be_added)
*/
node *addAtStart(node *head ,int data)
{
    node *temp = malloc(sizeof(node *));
    
    temp->data = data;
    temp->address = head;
    
    head = temp;

    return head;
}

/*
Function to insert node at position
addToPos( head_node ,data_to_be_added ,position_to_add )
*/
void addToPos(node *head ,int data ,int position)
{
    node *temp = malloc(sizeof(node *));
    
    temp->data = data;
    temp->address = NULL;

    int index = 1;
    node *ptr = head;
    while( index <= position-1 )
    {
        index++;
        ptr = ptr->address;
    }

    temp->address = ptr->address;
    ptr->address = temp;
}

/*
Funtion to print data of linkedList
printList( head_node );
*/
void printList( node *head )
{
    node *ptr = head;
    
    int index = 0;

    while(ptr != NULL )
    {
        printf("%d. %d\n",++index ,ptr->data);
        ptr = ptr->address;
    }
}

/*
Function to print data at position 
printAtPos( head_node )
*/
void printAtPos(node *head ,int position)
{
    int index = 1;
    node *ptr = head;
    while( index < position )
    {
        index++;
        ptr = ptr->address;
    }
    printf("Data At %d : %d\n",index ,ptr->data);
}


/*
Function to delete node from starting position in linkedList
delfronBeg( head_node )
*/
node *delfromBeg( node *head)
{
    node *temp = head;
    head = head->address;

    free(temp);
    temp =NULL;

    return head;

}

/*
Function to delete last node of linkedList
delLast( head_node );
*/
void delLast( node *head )
{
    node* ptr = head;

    while(ptr->address->address != NULL)
        ptr = ptr->address;
    
    free(ptr->address);
    ptr->address = NULL;
}

/*
Function to delete node from specified position
delFromPos( head_node ,position_to_be_deleted)
*/
void delFromPos( node *head ,int position )
{
    node *ptr = head;
    node *temp;

    int index = 1;

    while(index <= position-1)
    {
        index++;
        temp = ptr;
        ptr = ptr->address;
    }
    temp->address = ptr->address;
    
    free(ptr->address);
    ptr->address = NULL;
}

//=============================================== MAIN METHOD ================================================

int main()
{   
//============================ Initializing linkedList =========================================

    node *head = NULL;

    //First node of linkedList

    head = malloc(sizeof(node *));
    head->data  = 1;
    head->address = NULL;


//====================================== testing LinkedList =================================================
    head = addAtStart(head ,98);

    addAtLast( head ,49) ;

    addToPos(  head ,78 ,3 );

    delLast( head );
    printAtPos(head ,2 );
    head = delfromBeg( head );
    delFromPos( head ,2 );
    printList( head);

    printf("Done");
    return 0;
}