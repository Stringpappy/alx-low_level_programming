#include "lists.h"
/**
 * add_nodeint - func that adds a new node at the beginning of list
 * @head: pointer to the first node
 * @n: input integer
 * Retuturn:int 
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	
	new = malloc(sizeof(listint));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
