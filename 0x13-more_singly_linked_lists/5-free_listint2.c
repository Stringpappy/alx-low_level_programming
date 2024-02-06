#include "lists.h"

/**
* free_listint2 - func that create free list
* @head: head pointer
*/
void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL)
return;

while (*head)
{

temp = (*head)->next;
free(*head);
*head = temp;
}
head = NULL;
}
