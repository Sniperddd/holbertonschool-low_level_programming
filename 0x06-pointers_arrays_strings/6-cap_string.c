#include "main.h"
/**
 * cap_string - capitalize all words
 *@a:pointer char
 *Return: return a
 */

char *cap_string(char *a)
{
	int i;
	int j;
	char separator[] = "\t\n,;.!?\'(){}";

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			if (i == 0)

				a[i] -= 32;
			else
			{
				for (j = 0; separator[j] != '\0'; j++)
				{
					if (a[i - 1] == separator[j])

						a[i] -= 32;
				}
			}
		}
	}
	return (a);
}
