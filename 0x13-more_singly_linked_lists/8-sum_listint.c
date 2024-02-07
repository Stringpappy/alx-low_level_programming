#include "lists.h"
/**
 * sum_listint - func that return sum of all data
 * @head: pointer to the first node
 * Return: always (0)
 */
int sum_listint(listint_t *head)
{
	int ad = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		ad += tmp->n;
		tmp = tmp->next;
	}
	return (ad);
}
