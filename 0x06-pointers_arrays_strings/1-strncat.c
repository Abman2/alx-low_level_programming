#include "main.h"

/**
 * _strncat - This function copies a string into another
 *
 * @dest: Destination string
 * @src: source string
 * @n: integer n
 * Return: always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	int k;
	int l = 0;
	int totalLength;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
	}

	totalLength = i + j;



		for (l = i; l < totalLength; l++)
		{
			if (k == i + n)
			{
				break;
			}
			dest[l] += src[k];
			k++;
		}


	return (dest);
}
