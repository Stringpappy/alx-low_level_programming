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
	/*unsigned int x;*/
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	/*for (x = 0; str[x] != '\0'; x++)*/
	
	newnode->str = str;
	new_node->next = *head;
	*head = *newnode;

	
	return (newnode);

}
