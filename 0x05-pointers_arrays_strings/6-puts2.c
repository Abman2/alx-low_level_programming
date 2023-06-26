#include "main.h"
/**
* puts2  - function of a function
* _puts: heh
* Return: 0
* @str: integer
*/
void puts2(char *str)
{
int i, j;

for (i = 0; i >= 0; i++)
{
if (str[i] == '\0')
{
break;
}
}

for (j = 0; j <= (i - 1); j++)
{
j += 2;
_putchar(str[j]);
}
_putchar('\n');
}
