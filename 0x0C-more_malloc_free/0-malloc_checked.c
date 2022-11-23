#include "main.h"

/**
 * malloc_checked - Allocates memory
 * @b: the size to allocate
 * Return: Nothing.
 */

void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
