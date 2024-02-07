#include "lists.h"

/**
 * pop_listint - function that deletethe node of a list
 * @head: pointer to first node
 * Return: node
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int dig;

	if (!head || !*head)
		return (0);
	dig = (*head)->n;
	tmp = (*head)->next;
	free(head);
	*head = tmp;

	return (dig);
}
