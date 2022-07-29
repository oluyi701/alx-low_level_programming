#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes allocate
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	voide *men = malloc(b);

	if (men == NULL)
		exit(98);

	return (men);
}
