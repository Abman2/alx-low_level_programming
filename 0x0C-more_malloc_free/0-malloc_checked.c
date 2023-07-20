#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - main entry to program
 * @b: int input
 * @av: double pointer array
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
int *ptr;
ptr = (void *)malloc(sizeof(int) * b);
if (ptr == NULL)
{
_putchar(98);
}
_putchar(*ptr);
return (0);
}
