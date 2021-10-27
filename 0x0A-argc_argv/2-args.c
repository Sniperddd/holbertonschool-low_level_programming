#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *@argc: count of args present
 *@argv: array of char * pointing to args
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
	 int i;

	if (argc < 1)
		return (-1);

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
