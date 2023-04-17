#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a struct dog
 * @fr: free struct
 */
void free_dog(dog_t *fr)
{
	if (fr)
	{
		free(fr->name);
		free(fr->owner);
		free(fr);
	}
}
