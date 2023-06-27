#include "main.h"
/**
* puts_half  - function of a function
* _puts: heh
* Return: 0
* @str: integer
*/
void puts_half(char *str)
{
int i, j;


for (i = 0; i >= 0; i++)
{
if (str[i] == '\0')
{
break;
}
}

for (j = ((i - 1) / 2); j >= (i - 1); j++)
{
if (i % 2 == 0)
{
j = (i - 2) / 2;

}
_putchar(str[j]);
}
}
