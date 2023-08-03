#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* get_nodeint_at_index - function
* @head:  argument
* Return: returns sum
* @index: argument
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;
if (head == NULL)
{
return (NULL);
}


while (head != NULL)
{
if (index == count)
{
return (head);
}
count++;
head = head->next;
}

return (head);
}
