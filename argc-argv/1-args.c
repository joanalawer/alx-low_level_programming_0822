#include <stdio.h>
/**
 * main - Entry point
 * @argc: prints number of arguments
 * @argv: prints char of arguments
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (argc - 1);
}
