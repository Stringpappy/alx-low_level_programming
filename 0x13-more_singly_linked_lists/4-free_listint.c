#include "lists.h"

/**
* free_listint - frees a listint_t list
* @head: hed pointer to listint list
*/
void free_listint(listint_t *head)
{
listint_t *list;

while (head)
{
list = head->next;
free(head);
head = list;
}
}
