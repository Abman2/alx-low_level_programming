#include <stdio.h>
/**
* main - A program for  printing size of various computer types
* Return: 0 (Success)
*/

int main(void)
{
int i;
char c;
long int d;
long long int e;
float f;
printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(e));
printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}

