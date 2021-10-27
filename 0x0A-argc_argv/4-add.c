#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *main - entry point for program
 *
 *@argc: count of args present
 *@argv: array of char * pointing to args
 *
 *Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	 int i;
	 int add = 0;

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
