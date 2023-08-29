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
        ptr->next = temp;
    }

    return *head;
}

void free_listint2(listint_t **head)
{
    listint_t *temp, *dup;
    dup = *head;

    if (dup == NULL)
		return;

    for (; dup != NULL;)
    {
        temp = (dup)->next;
        free(dup);
        dup = temp;
    }
    *head = NULL;
    
}


// listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
// {
//     listint_t *ptr1, *ptr2, *temp;
//     unsigned int count;

//     ptr1 = ptr2 = *head;
//     count = 0;

//     temp = malloc(sizeof(listint_t));
// 	if (temp == NULL)
// 		return (NULL);

//     temp->n = n;
//     temp->next = NULL;

//     if (idx == 0)
// 	{
//         free(temp);

//         return add_nodeint(head, n);
// 		// temp->next = ptr1;
// 		// *head = temp;
// 		// return (temp);
// 	}

//     for (; ptr1 != NULL; ptr1 = ptr1->next)
//     {
//         // if (count > 1)
//         //     ptr2 = ptr2->next;

//         if (count == idx)
//         {
//             temp->next = ptr1;
//             ptr2->next = temp;
//             return *head;
//         }

//         ptr2 = ptr1;

//         count++;
//     }
//     if (ptr1 == NULL && idx == count)
//     {
//         free(temp);
//         return add_nodeint_end(head, n);
//         // temp->next = ptr1;
//         // ptr2->next = temp;
//         // return *head;
//     }

//     return NULL;
// }


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *ptr = *head;
	unsigned int node;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (idx == 0)
	{
		temp->next = ptr;
		*head = temp;
		return (*head);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (ptr == NULL || ptr->next == NULL)
			return (NULL);

		ptr = ptr->next;
	}

	temp->next = ptr->next;
	ptr->next = temp;

	return (temp);
}

int main(void)
{
    listint_t *head;

    int n;
    // scanf("%d", &n);

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    // add_nodeint_end(&head, 3);
    // add_nodeint_end(&head, 4);
    // add_nodeint_end(&head, 98);
    // add_nodeint_end(&head, 402);
    // add_nodeint_end(&head, 1024);
    print_listint(head);
    printf("-----------------\n");
    insert_nodeint_at_index(&head, 2, 4096);
    print_listint(head);
    free_listint2(&head);
    return (0);

}