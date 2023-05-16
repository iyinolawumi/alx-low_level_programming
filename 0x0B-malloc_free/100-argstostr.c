#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Function that concatenates all the arguments of the program
 * @ac: Number of arguments
 * @av: Array of arguments
 *
 * Return: On Success - Pointer to concatenated string
 *		else - NULL
 */

char *argstostr(int ac, char **av)
{
	int args, byte, k, size = ac;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (args = 0; args < ac; args++)
	{
		for (byte = 0; av[args][byte]; byte++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	k = 0;
	for (args = 0; args < ac; args++)
	{
		for (byte = 0; av[args][byte]; byte++)
			str[k++] = av[args][byte];
		str[k++] = '\n';
	}
	str[size] = '\0';

	return (str);
}
