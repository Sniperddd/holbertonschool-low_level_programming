#include "main.h"
/**
 *_strspn - gets the length of a prefix substring.
 *@s: string character value.
 *@accept: character value.
 *Return: new string value.
 */

unsigned int _strspn(char *s, char *accept)
{
	int len;
	int len2;
	int n = 0;

	for (len = 0; s[len]; len++)
	{
		if (n != len)
			break;

		for (len2 = 0; accept[len2]; len2++)
		{
			if (s[len] == accept[len2])
				n++;
		}
	}

	return (n);
}
