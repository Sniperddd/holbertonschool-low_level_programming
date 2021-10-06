#include "main.h"
/**
 * print_sign - Print sign
 * Description - Print sign number
 * @n: parameter
 *
 * Return: if 1 is + --> 0 print 0 and -1 print /
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('/');
		return ('/');
	}
	_putchar(',');
	_putchar(' ');
}
