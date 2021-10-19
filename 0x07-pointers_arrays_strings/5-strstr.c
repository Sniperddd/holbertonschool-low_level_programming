#include "main.h"
/**
 *_strstr -  locates a substring.
 *@haystack: string to be scannned
 *@needle: small string to be searched with-in haystack string.
 *Return:pointer-->beginning--> located substring, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j = 0;


	if (needle[j] == '\0')

		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{

			for (j = 0; needle[j] != '\0' && haystack[i + j]
					&& needle[j] == haystack[i + j]; j++)

				;
			if (needle[j] == 0)
				return (haystack + i);
		}

	}
	return (0);
}
