#include "main.h"

/**
 * _strcat - This function copies a string into another
 *
 * @dest: Destination string
 * @src: source string
 *  integer n
 * Return: always 0
 */

char *_strcat(char *dest, char *src)
{
int i;
int j;
int k = 0;
int l;
int totalLength;

for (i = 0; dest[i] != '\0'; i++)
{
}
for (j = 0; src[j] != '\0'; j++)
{
totalLength = i + j;

for (l = i; l < totalLength; l++)
{
dest[l] += src[k];
k++;
}
return (dest);
}
