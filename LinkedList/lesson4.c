#include <stdio.h>
#include <stdlib.h>


typedef struct nodePtr
{
    int data;
    struct nodePtr *link;
} node;


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


    return (0);
}