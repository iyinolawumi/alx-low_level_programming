#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Function should return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
		int k, concat_k = 0, len = 0;

		if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (k = 0; s1[k] || s2[k]; k++)
		len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	for (k = 0; s1[k]; k++)
		concat_str[concat_k++] = s1[k];

	for (k = 0; s2[k]; k++)
		concat_str[concat_k++] = s2[k];

	return (concat_str);
}
