#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - function that allocates memory
 * @b: number of byte to allocate
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
