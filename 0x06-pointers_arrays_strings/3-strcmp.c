#include "main.h"
/**
 *_strcmp - compares two strings
 *@s1: pointer string
 *@s2: pointer string
 *Return: s2 value
 */


int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))

		s1++, s2++;
	return (*(char *)s1 - *(char *)s2);
}
