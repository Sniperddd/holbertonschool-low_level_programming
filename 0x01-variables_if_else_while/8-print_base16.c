#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description - Prints base 16
 * Return: 0
 */

int main(void)
{

	char hex;

	for (hex = '0'; hex <= '9'; ++hex)

		putchar(hex);
	for (hex = 'a'; hex <= 'f'; ++hex)

		putchar(hex);
	putchar('\n');
	return (0);
}
