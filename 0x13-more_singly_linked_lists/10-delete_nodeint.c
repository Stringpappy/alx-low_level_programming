#include "lists.h"
/**
 * delete_nodeint_at_index - function tha t delete an index
 * @head: pointer to first node
 * @index: the first data
 * Return: 0;
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *tmp, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	tmp = *head;
	for (x = 0; x < index - 1; x++)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;

	}
	next = tmp->next;
	tmp->next = next->next;
	free(next);
		return (1);
}
