#include <stdio.h>
#include <unistd.h>
int _putchar(char c);
void print_triangle(int size);

int main(void)
{
	print_triangle(10);
}

void print_triangle(int size)
{

if (size<= 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = 0; i < size; i++)
{
for (j = size - 1 ; j > i ; j--)
{

_putchar(' ');

}
for (j = 0; j < ( i + 1); j++)
{

_putchar('#');

}
_putchar('\n');
}
}
}
int _putchar(char c)
{
return (write(1, &c, 1));
}
