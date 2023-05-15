#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that adds positve numbers
 * @argc: Number or counts of arguments
 * @argv: Array to pointer of string of arguments
 *
 * Return: If one of the number contains symbols that are not digits,
 * return 1, otherwise return 0
 */

int main(int argc, char **argv)
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
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
