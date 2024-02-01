#include "lists.h"
/**
 * add_node_end - add node to the end of the node
 * @head: pointer to the head of node
 * @str:pointer to string
 * Return: head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *point;
	unsigned int i, count = 0;

	newnode = malloc(sizeof(list_t));
	for (i = 0; str[i] != '\0'; i++)
		count++;
	newnode->str = strdup(str);
	newnode->next = NULL;
	point = *head;

	if (point == NULL)
		*head = newnode;
	else
	{
		while (point->next != NULL)
			point = point->next;
		point->next = newnode;
	}
	return (*head);
}
