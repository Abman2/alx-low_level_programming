#include "main.h"
/*
* _puts - function of a function
* _puts: heh
* Return: 0
* @str: integer
*/
void _puts(char *str)
{
int i;

for (i = 0; i >= 0; i++)
{
if (str[i] == '\0')
{
break;
}
_putchar(str[i]);
}


}
