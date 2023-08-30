#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;

	for (; h != NULL; h = h->next)
	{
		if (h->str == NULL)
		printf("[0] (nul)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		count++;
	}

	return (count);
}

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;
	int len;

	ptr = *head;

	temp =  malloc(sizeof(list_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->str = strdup(str);
	len = 0;
	while (str[len])
	{
		len++;
	}
	temp->len = len;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		for (; ptr->next != NULL; ptr = ptr->next)
		{
		}
		ptr->next = temp;
	}

	return (*head);
}

void construct(void);

void construct(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}


int main(void)
{
    printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
    return (0);
}
