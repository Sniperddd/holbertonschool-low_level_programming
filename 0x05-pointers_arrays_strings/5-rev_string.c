#include "main.h"
/**
 * rev_string - reverse string
 *@s: pointer character
 *
 */

void rev_string(char *s)
{
	int i;
	int j;
	char rstr[500];

	for (i = 0; *s != '\0'; i++)
	{
		rstr[i] = *s;
		s++;
	}
	s--;

	for (j = 0; j != i; j++)
	{
		*s = rstr[j];
		s--;
	}
	s++;
}
