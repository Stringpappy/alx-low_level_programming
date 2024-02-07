#include "lists.h"

/**
 * get_nodeint_at_index - i func thaat return node at certain index
 * @head:poiter to the strt of a node
 * @index:first data in a node
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;
	listint_t *tmp = head;

	while (tmp && x < index)
	{
		tmp = tmp->next;
		x++;
	}
	return (tmp ? tmp : NULL);
}
