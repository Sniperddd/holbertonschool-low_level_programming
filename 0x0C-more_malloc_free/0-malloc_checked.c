#include <stdio.h>
#include "main.h"
/**
 *malloc_checked - allocates memory--> using malloc
 *@b: number of bytes to allocate
 *
 *Return: a pointer to --> allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr1;

	ptr1 = malloc(b);

	if (ptr1 == NULL)
		exit(98);

			return (ptr1);
}
