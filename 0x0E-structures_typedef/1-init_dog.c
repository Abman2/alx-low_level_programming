#include "stdlib.h"
#include "dog.h"
#include "stdio.h"
/**
* init_dog - maininclud chek the codee
* @name: char
* @age: float
* @owner: char
* @d: struct
* @dog - strucht
* struct *d - struct
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
