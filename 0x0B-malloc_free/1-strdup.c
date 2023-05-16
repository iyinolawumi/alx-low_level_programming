#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to new allocated space in memory
 * which contains a copy of the string given as parameter
 * @str: The copy of the string
 *
 * Return: If str == NULL or  memory not enough is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *duplicate;
		int k, len = 0;

	if (str == NULL)
		return (NULL);

	for (k = 0; str[k]; k++)
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (k = 0; str[k]; k++)
		duplicate[k] = str[k];

	duplicate[len] = '\0';

	return (duplicate);
}
