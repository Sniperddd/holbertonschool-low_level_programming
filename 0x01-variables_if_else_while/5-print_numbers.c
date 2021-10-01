#include <stdio.h>
/**
 * main - Print putchar--> digit
 * Description - Prints 0 - 9 base 10
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
