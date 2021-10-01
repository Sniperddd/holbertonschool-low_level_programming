#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints alphabet letters
 * Description - Prints alphabet --> reverse
 * Return: 0
 */

int main(void)
{
	int alpha;

	for (alpha = 122; alpha >= 97; alpha--)
	{
		putchar(alpha);

	}
	putchar('\n');
	return (0);
}
