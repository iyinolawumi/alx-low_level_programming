#include <stdio.h>

/**
 * main - A program that print all arguments it receives
 * @argc: The number of arguments
 * @argv: The pointer to the strings
 *
 * Return: Always 0
 */

int main(int argc, char  __attribute__((__unused__)) **argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
