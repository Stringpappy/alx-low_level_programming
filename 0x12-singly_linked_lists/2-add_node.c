#include "lists.h"
#include <string.h>

/**
 * add_node -  function that adds a new node at the beginning
 * @head:pointer to node 1
 * @str:pointer to string
 * Return:return node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int x, count = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	for (x = 0; str[x] != '\0'; x++)
		count++;
	newnode->len = count;
	newnode->next = *head;
	*head = newnode;

	return (newnode);

}
