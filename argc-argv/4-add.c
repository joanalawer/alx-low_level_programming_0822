#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 * @argc: print number of arguments
 * @argv: prints charcter of arguments
 * Return: 0 if no arg, 1 if arg contains symbol
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argc < 2)
			{
				printf("0\n");
			}
			else if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
