#include "main.h"
/**
* print_rev  - function of a function
* _puts: heh
* Return: 0
* @s: integer
*/
void print_rev(char *s)
{
int i;

for (i = 0; i >= 0; i++)
{
if (s[i] == '\0')
{
break;

		}
}
int j;
for (j = i; j >= 0; j--)
{
_putchar(j);
}
}
