#include <stdio.h>
#include <stdlib.h>


typedef struct nodePtr
{
    int data;
    struct nodePtr *link;
} node;

int count_of_nodes(node *head)
{
    int count = 0;
    if (head == NULL)
    {
        printf("[0] (nil)\n");
        return 0;
    }

    node *ptr = head;

    for(; ptr != NULL; ptr = ptr->link)
    {
        printf("[%d]", ptr = ptr->data);
        count++;
    }

    return count;
}

// node *add_at_end(node **head, int data)
// {
//     node *ptr, *temp;
//     ptr = head;
//     temp = malloc(sizeof(node));

//     temp->data = data;
//     temp->link = NULL;

//     for (; ptr != NULL; ptr = ptr->link)
//     {
//         ;
//     }
//     ptr->link = temp;

//     return *head;

// }

void *add_at_end(node **head, int data)
{
    node *ptr, *temp;
    ptr = head;
    temp = malloc(sizeof(node));

    temp->data = data;
    temp->link = NULL;

    for (; ptr->link != NULL; ptr = ptr->link)
    {
        ;
    }
    ptr->link = temp;

    return *head;

}

int main()
{
    /*create the head that points to a node*/
    node *head = NULL;
    head = malloc(sizeof(node));
    head->data = 45;
    head->link = NULL;

    /*create another (current) that points to another node*/
    node *new = NULL;
    new = malloc(sizeof(node));
    new->data = 98;

    /*update the first node so as to point to the second node*/
    head->link = new;

    /*how to add the third list to the node*/
    new = malloc(sizeof(node));
    new->data = 3;
    new->link = NULL;

    /*link the second node to the last node*/
    head->link->link = new;

    /*calculate the no of nodes*/
    int res = count_of_nodes(head);
    add_at_end(head, 67);

    printf("%d\n", res);

    return (0);
}