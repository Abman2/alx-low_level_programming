#include "main.h"
/**
* rev_string  - function of a function
* _puts: heh
* Return: 0
* @s: integer
*/
void rev_string(char *s)
{
int i, j;
char r, n;

for (i = 0; i >= 0; i++)
{
if (s[i] == '\0')
{
break;

}
n = s[i];
*s = n;
}

for (j = (i - 1); j >= 0; j--)
{
r = s[j];
*s = r;
}
}
