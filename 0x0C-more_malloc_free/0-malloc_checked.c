#include "main.h"

/**
 * malloc_checked - Function that allocates a block of memory using malloc
 * @b: Parameter
 * Return: 98 or pointer to memory
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(sizeof(b));
	if (a == NULL)

		exit(98);

	return (a);
}
