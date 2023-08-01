#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - linked list function to print elements and size
 * @h: a pointer to a struct typedef to list_t
 * Return: count
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

		while (h != NULL)
		{
			count++;
			h = h->next;
		}

	return (count);
}
