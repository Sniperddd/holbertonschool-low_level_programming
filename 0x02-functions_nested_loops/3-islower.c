#include "main.h"
/**
 * _islower - Check lower
 * @c: parameter
 * Description - Check lowercase character
 *
 * Return: if lowercase 1 otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c < 'z')

		return (1);
	else
		return (0);
}
