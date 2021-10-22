#include "main.h"
/**
 *_pow_recursion - value of x raised to the power of y
 *@x: value
 *@y: raise to power
 *Return: x & y;
 */

int _pow_recursion(int x, int y)
{
	int i = 0;

	if (y < 0)
	{
		i++;
		return (-1);
	}
	if (y == 1)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
