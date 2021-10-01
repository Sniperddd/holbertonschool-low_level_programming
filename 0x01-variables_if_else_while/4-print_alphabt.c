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
	if (x == 'q' || x == 'e')
	{
	x++;
	}
	putchar(x);
	}
	putchar('\n');
	return (0);
}
