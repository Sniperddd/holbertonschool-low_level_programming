#include "main.h"
/**
 * _memset -fills memory with a constant byte.
 *@n: unsigned int
 *@b: character value
 *@s: string value
 *Return: a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (0);
}
