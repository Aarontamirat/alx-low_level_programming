#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - freeing previously allocated memories
 *@d: an array
 * Description: Free memory for struct
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
