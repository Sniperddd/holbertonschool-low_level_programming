#include "main.h"
/**
 *_strlen_recursion - length of the string
 *@s: pointer character
 *
 * Return: return the length of the string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len = _strlen_recursion(s + 1) + 1;
	}
	return (len);
}
