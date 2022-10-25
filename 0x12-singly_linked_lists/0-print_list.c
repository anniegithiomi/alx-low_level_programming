#include "list_t.h"

/**
 * print_list - function that prints the number of elements in a
 * linked list_t list
 * @h: Const pointer of linked list_t list
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
