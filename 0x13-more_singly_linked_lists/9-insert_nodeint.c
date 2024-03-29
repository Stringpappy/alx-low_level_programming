#include "lists.h"
/**
 * insert_nodeint_at_index - func that inserts a new node
 * @head:pointer to he first node
 * @idx: index
 * @n: integer
 * Return:node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *new;
	listint_t *tmp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (x = 0; tmp && x < idx; x++)
	{
		if (x == idx - 1)
		{
		new->next = tmp->next;
		tmp->next = new;
		return (new);
		}
		else
			tmp = tmp->next;
	}
		return (new);

}
