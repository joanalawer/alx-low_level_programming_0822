#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: prints number of arguments
 * @argv: prints character of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, product;

	if (argc == 3)
	{
		for (i = 0; i < argc; i++)
		{
			product = atoi(argv[1]) * atoi(argv[2]);
		}
	printf("%d\n", product);
	return (0);

	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
