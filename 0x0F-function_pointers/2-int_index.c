#include "function_pointers.h"
/**
 * array_iterator - function
 * @array: parameter
 * @size: size of the array
 * @action: function pointer as a parameter
 */
int int_index(int *array, int size, int (*cmp)(int))
{
if(size <= 0) 
{
return (-1);
}
int i, temp;

for(i = 0; i <= size; i++)
{
cmp(array[i]);
array[i] = temp;
if (array[i] == temp)
{
return (i);
break;
}
else
{
return (-1);
}
}
return (i);
}
