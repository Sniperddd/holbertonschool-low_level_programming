#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point for program
 *
 *@argc:  count of args--> present cmd, running in source
 *@argv:  array of char * -->pointing to args
 *
 *Return: Always 0
 */

int main(int argc, char *argv[])
{

	if (argc < 1)

		return (-1);
	printf("%s\n", argv[0]);
	return (0);
}
