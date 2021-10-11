#include "main.h"
/**
 * _strlen - returt the length
 *@s:pointer to the character array
 *Return: length of string
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
