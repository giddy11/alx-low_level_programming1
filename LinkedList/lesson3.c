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
    new->link = NULL;

    /*update the first node so as to point to the second node*/
    head->link = new;

    /*how to add the third list to the node*/
    node *new2 = NULL;
    new2 = malloc(sizeof(node));
    new2->data = 3;
    new2->link = NULL;

    /*update the second node so as to point to the third node*/
    new->link = new2;


    return (0);
}