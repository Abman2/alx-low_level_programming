#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
  * print_listint - function
  * @h:  argument
  *
  *
*/


size_t print_listint(const listint_t *h)
{
	int sum = 0;
while(h != NULL)
	{
		
		printf("%d\n", h->n);
		sum += 1;
		h = h->next;
	}


return (sum);

}
