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

listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *temp;

    temp = malloc(sizeof(listint_t));
    if (temp == NULL)
        return NULL;

    temp->n = n;
    temp->next = *head;
    *head = temp;

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

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = tortoise->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			for (; tortoise != hare; nodes++, hare = hare->next)
				tortoise = tortoise->next;

			tortoise = tortoise->next;
			for (; tortoise != hare; nodes++)
				tortoise = tortoise->next;

			return (nodes);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (0);
}

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, i = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++, head = head->next)
			printf("[%p] %d\n", (void *)head, head->n);
	}
	else
	{
		for (i = 0; i < nodes; i++, head = head->next)
			printf("[%p] %d\n", (void *)head, head->n);

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t nodes, i = 0;

	nodes = looped_listint_len(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
        {
            temp = (*h)->next;
            free(*h);
            *h = temp;
        }
	}
	else
	{
		for (i = 0; i < nodes; i++)
        {
            temp = (*h)->next;
            free(*h);
            *h = temp;
        }
        *h = NULL;
	}

	return (nodes);
}


int main(void)
{
    listint_t *head;
    listint_t *head2;
    listint_t *node;

    head2 = NULL;
    add_nodeint(&head2, 0);
    add_nodeint(&head2, 1);
    add_nodeint(&head2, 2);
    add_nodeint(&head2, 3);
    add_nodeint(&head2, 4);
    add_nodeint(&head2, 98);
    add_nodeint(&head2, 402);
    add_nodeint(&head2, 1024);
    print_listint_safe(head2);
    head = NULL;
    node = add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    node->next = add_nodeint(&head, 98);
    add_nodeint(&head, 402);
    add_nodeint(&head, 1024);
    print_listint_safe(head);
    free_listint_safe(&head2);
    free_listint_safe(&head);
    printf("%p, %p\n", (void *)head2, (void *)head);
    return (0);

}