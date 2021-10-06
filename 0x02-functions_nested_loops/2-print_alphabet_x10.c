#include "main.h"
/**
 * void print_alphabet_x10 - Print alphabet
 * Descritpion - Print alphabet 10x
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char alpha;
	int i = 0;

	while (i < 10)
	{
		i++;
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
	_putchar('\n');
	}

}
