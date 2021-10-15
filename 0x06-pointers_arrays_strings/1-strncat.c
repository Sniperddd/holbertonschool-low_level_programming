#include "main.h"
/**
 * _strncat - concentrate --> two string with n byte.
 *@dest: pointer -->character value.
 *@src: pointer character value
 *@n: integer value.
 *Pointer --> character value.
 * Return: dest value.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)

		;

	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	if (j >= n)
		dest[i] = '\0';
	return (dest);
}
