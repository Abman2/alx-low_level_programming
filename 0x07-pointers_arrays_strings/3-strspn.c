#include "main.h"
/**
* _strspn - declareation
* @s: declaration
* @accept:  integer
*
*
*/
unsigned int _strspn(char *s, char *accept)
{
int i, j, k, l;
int sum = 0;
for (i = 0; s[i] != ','; i++)
{
}
for (j = 0; accept[j] != '\0'; j++)
{
}
for (k = 0; k < i; k++)
{
for (l = 0; l < j; l++)
{
if (s[k] == accept[j])
{
sum++;
}
}
}
return (sum);
}
