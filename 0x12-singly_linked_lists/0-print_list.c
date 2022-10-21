#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list -  prints all the elements of a list_t list
 * @h: singly linked list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int index;

	if ((*h).str == NULL)
	{
		printf("[%d] %s\n", 0, "(nil)");
	}

	index = 0;
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		index++;
	}

	return (index);
}
