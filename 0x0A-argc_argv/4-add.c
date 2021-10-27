#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *@argc: register number
 *@argv: container number
 * Return: return 1 error if not 0;
 */

int main(int argc, char *argv[])
{
	int i, add;

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
