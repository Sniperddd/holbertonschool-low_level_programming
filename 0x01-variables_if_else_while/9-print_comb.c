#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints possible combination
 * Description - in a single digit
 * Return: 0
 */

int main(void)
{
	int sd;

	for (sd = '0'; sd <= '9'; sd++)
	{
		putchar(sd);
		if (sd != '9')
		{
			putchar(',');
			putchar(' ');
			continue;
		}
	}
	putchar('\n');
	return (0);
}
