#include <stdio.h>
#include <stdlib.h>

typedef struct node *nodePtr; //the nodeptr is a pointer to the struct node
                              //a node is a struct that contains a nodePtr and a value

struct node {
    int data;
    nodePtr next;
};

typedef struct node node;

/*a ptr to the first element in the list is the list
* a list a either NULL or a piece of Data with the List and so on
*/
int main(int argc, const char *argv[])
{
    nodePtr first = NULL;
    first = malloc (sizeof (node));

    first->next = NULL;
    first->data = 61;

    first->next = malloc(sizeof (node));
    first->next->next = NULL;
    first->next->data = 62;


    int res = first->next->data;

    printf("%d", res);

    return (0);
}