#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head:a point to first node
 */
void free_list(list_t *head)
{
	list_t *point;

		while (head)
		{
			point = head->next;
			free(head->str);
			free(head);
			head = point;
		}
}
