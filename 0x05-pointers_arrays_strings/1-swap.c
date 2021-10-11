#include "main.h"
/**
 *  swap_int - swaps the values
 *  Description -swaps the values of the two interger
 *  @a: value
 *  @b: value
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}



