#include "lists.h"

/**
 * get_nodeint_at_index - i func thaat return node at certain index
 * @head:poiter to the strt of a node
 * @index:first data in a node
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t x;

	for (x = 0; (x  < index) && (head->next); x++)
		head = head->next;

	if (x < index)
		return (NULL);
	return (head);
}
