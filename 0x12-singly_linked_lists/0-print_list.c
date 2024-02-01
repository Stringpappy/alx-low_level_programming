#include "lists.h"
/**
 * print_list -fuction tht prints all the elements of a list_t list
 * @h: pointer to node
 * Return: node
 */
size_t print_list(const list_t *h)
{
	size_t  nodes;

	nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nill)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
