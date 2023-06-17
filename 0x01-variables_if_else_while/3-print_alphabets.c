#include <stdio.h>
/**
* main - printing alphabet
* Return: 0
*/

int main(void)
{

char i;
char ch;

for (i  = 'a' ; i <= 'z' ; i++)
{
putchar(i);
}
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
putchar(ch);
}
putchar('\n');

return (0);
}
