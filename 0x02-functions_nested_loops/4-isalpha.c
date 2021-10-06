#include "main.h"
/**
 * _isalpha - check alphabet
 * Description - check alphabet lower case & Upper case
 * @c: parameter
 * Return: 1 if lowercase or uppercase and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c < 'z') || (c >= 'A' && c < 'Z'))
		return (1);

	else
		return (0);
}
