#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: the linked listi
 */

void free_list(list_t *head)
{
if (head == NULL)
{
while (head != NULL)
{
	list_t *tmp;

	tmp = head;
	free(tmp->str);
	free(tmp);
	head = head->next;
}
}
}
