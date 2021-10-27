#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *main - Entry point
 *@argc: count of args present
 *@argv: array of char * pointing to args
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
	unsigned int i, add = 0;

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
