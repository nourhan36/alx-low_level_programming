#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - variable of type struct dog
 * @ptr: pointer
 * @n: name
 * @a: age
 * @o: owner
 */
void init_dog(struct dog *ptr, char *n, float a, char *o)
{
	if (ptr == NULL)
		ptr = malloc(sizeof(struct dog));
	ptr->n = n;
	ptr->a = a;
	ptr->o = o;
}
