#include "main.h"
/**
 * print_array - print n element of an  array
 *@a: pointer
 *@n: int variable
 */

void print_array(int *a, int n)
{

	int i;
	int interger;

		for (i = 0; i < n; i++)
		{

			interger = *(a + i);
			printf("%d", interger);

			if (i != n - i)
				printf(", ");
		}
	printf("\n");
}
