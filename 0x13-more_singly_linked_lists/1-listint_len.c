#include "lists.h"
/**
 * listint_len - function that retun the num of element
 * @h: pointer that point to first node
 * Return: node
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
