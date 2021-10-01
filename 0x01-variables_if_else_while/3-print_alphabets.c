#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints alphabet in lowercase
 * Description - lowercase alphabet function
 * Return: always 0
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
