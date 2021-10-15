#include "main.h"
/**
 * reverse_array - reverse --> ontent
 *@a: pointer array
 *@n: interger value
 */
void reverse_array(int *a, int n)
{
	int b = 0;
	int c = 0;
	int temp;

	c = n - 1;

	while (b < c)
	{
		temp = a[b];
		a[b] = a[c];
		a[c] = temp;
		b++;
		c--;
	}
}
