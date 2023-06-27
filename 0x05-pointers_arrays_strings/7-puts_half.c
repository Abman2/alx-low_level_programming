#include "main.h"
/**
* puts_half  - function of a function
* _puts: heh
* Return: 0
* @str: integer
*/
void puts_half(char *str)
{
int i, j, k, n;


for (i = 0; i >= 0; i++)
{
if (str[i] == '\0')
{
break;
}
}
n = (i - 2) / 2;
k = ((i - 1) / 2);
for (j = k; j <= (i - 1); j++)
{
if (i % 2 == 0)
{
j = n;

}
_putchar(str[j]);
}

_putchar('\n');
}
