#include <stdio.h>

/**
 * main - A program that prints all the argument it receives
 * @argc: Number or count of argument
 * @argv: Array of pointer to the string
 *
 * Return: Alwayts 0
 */

int main(int argc, char **argv)
{
	int k;

	for (k = 0; k < argc; k++)
		printf("%s\n", argv[k]);

	return (0);
}
