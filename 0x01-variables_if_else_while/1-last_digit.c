#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - print a conditional statement
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n % 3 > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, n);
}
else if (n % 3  == 0)
{
printf("Last digit of %d is %d and is 0\n", n, n);
}
else if (n % 3 < 6)
{
printf("Last digit of %d is %d  and is less than 6 and not 0\n", n, n);
}
	return (0);
}