#include "main.h"

/**
 *print_square - draws square
 *
 *@size: int type parameter
 *Return: prints diagonal line
 */
void print_square(int size)
{
 
int i;
int j;

for (i = 0 ; i < size ; i++)
{
for (j = 0 ; j < size ; j++)
{
_putchar('#');
}
_putchar('\n');

}
_putchar('\n')


if (size <= 0)
{
_putchar('\n');
return;
}
}
