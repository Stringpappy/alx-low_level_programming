#include "lists.h"

/**
 * list_len - func that returns the number of elements
 * * @h:pointer to node
 * Return: node
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
