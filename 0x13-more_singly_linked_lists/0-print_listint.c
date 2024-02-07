#include "lists.h"

/**
 * print_listint - function that prints all element of a list
 * @h:head pointer to first node
 *Return: nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
