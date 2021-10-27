#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *@argc: count the number
 *@argv: array the numer
 *Return: return 0 or return 1 if error
 */

int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		mul *= atoi(argv[i]);
	printf("%d\n", mul);
	return (0);
}
