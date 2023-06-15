#include "lists.h"

/**
 * print_dlistint - prints all the element of a dlistint_t list.
 * @h: the head of the dlistint_t list.
 *
 * Return: the number of nodes in the list
 */
size_t print_dlsitint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->);
		h = h->next;
	}

	return (nodes);
}
