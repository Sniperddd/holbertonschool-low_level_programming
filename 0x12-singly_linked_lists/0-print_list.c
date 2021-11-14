#include "lists.h"
/**
  4 * print_list - print--> list.
  5 * @h: list.
  6 * Return: The elements--> linked.
  7 */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}

		i++;

	}
	return (i);

}
