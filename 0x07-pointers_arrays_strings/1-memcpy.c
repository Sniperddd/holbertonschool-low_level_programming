#include "main.h"
/**
 *_memcpy - fills memory
 *@n: value string
 *@src: character value
 *@dest: destination character value
 *Return:unsigned entire value
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
