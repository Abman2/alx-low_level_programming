#include "stddef.h"
#include "stdio.h"
#include "function_pointers.h"

/**
* print_name - funtion
* @name: argument
* @f: - funtion
*/

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
		return;
	f(name);
 





}
