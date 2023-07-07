#include "main.h"
/**
* rev_string  - function of a function
* _puts: heh
* Return: 0
* @s: integer
*/
void rev_string(char *s)
{
	int len, count, end;
	char beg;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	len--;
	for (count = 0; count <= len / 2; count++)
	{
		beg = s[count];
		end = s[len - count];
		s[count] = end;
		s[len - count] = beg;
	}
}
