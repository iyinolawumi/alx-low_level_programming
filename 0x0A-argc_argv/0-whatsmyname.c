#include <stdio.h>

/**
 * main - A program that prints its name followed by a new line
 * @argc: Number or count of arguments
 * @argv: Array of pointers to the string of arguments
 *
 * Return: Always 0
 */

int main(int __attribute__((__unused__)) argc, char **argv)
{
	printf("%s\n", argv[0]);

	return (0);
}
