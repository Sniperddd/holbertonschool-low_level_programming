#include "main.h"
/**
 *_strchr - locates a character in a string.
 *@s: string
 *@c: character
 *Return: a pointer to the first occurrence of the character c.:wq
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s != c)
			s++;
		if (*s == c)
		{
			return (s);
		}
	}
	return (0);
}
