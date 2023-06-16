#include <stdio.h>
/**
* main - A program for  printing size of various computer types
* Return: 0 (Success)
*/

int main(void)
{
int i;
char c;
long int li;
long long int lli;
float f;
printf("Size of a char: %lu bytes(s)\n", sizeof(c));
printf("Size of an int: %lu bytes(s)\n", sizeof(i));
printf("Size of a long int: %lu bytes(s)\n", sizeof(li));
printf("Size of a long long int: %lu bytes(s)\n", sizeof(lli));
printf("Size of a float: %lu bytes(s)\n", sizeof(f));
return (0);
}

