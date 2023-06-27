#include "main.h"

/**
 * print_array - converts a string to an integer
 * @s: string to be converted
 * @n: integer
 * Return: integers in a string
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i != n - 1)
{
_putchar(',');
_putchar(' ');

}
_putchar(a[i]);
}
_putchar('\n');

}
