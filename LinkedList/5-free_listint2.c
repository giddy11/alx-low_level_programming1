#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h)
{
    size_t count = 0;

    for(; h != NULL; h = h->next)
    {
        printf("%d\n", h->n); 
        count++;
    }

    return count;
}


listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *temp, *ptr;

    temp = malloc(sizeof(listint_t));
    if (temp == NULL)
        return NULL;

    temp->n = n;
    temp->next = NULL;

    if (*head == NULL)
    {
        *head = temp;
    }
    else
    {
        ptr = *head;
        for (; ptr->next != NULL; ptr = ptr->next);
    }
    ptr->next = temp;

    return *head;
}

void free_listint2(listint_t **head)
{
    listint_t *temp;

    if (head == NULL)
		return;

    for (; *head != NULL;)
    {
        temp = (*head)->next;
        free(*head);
        *head = temp;
    }
    head = NULL;
    
}


int main(void)
{
    listint_t *head;

     head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    // add_nodeint_end(&head, 2);
    // add_nodeint_end(&head, 3);
    // add_nodeint_end(&head, 4);
    // add_nodeint_end(&head, 98);
    // add_nodeint_end(&head, 402);
    // add_nodeint_end(&head, 1024);
    print_listint(head);
    free_listint2(&head);
    printf("%p\n", (void *)head);
    return (0);
}