#include "lists.h"

/**
 *free_listint - free--> list.
 *@head: head.
 */

void free_listint(listint_t *head)
{
	listint_t *freedom;

		while (head != NULL)
		{
			freedom = head;
			head = head->next;
			free(freedom);
		}
}
