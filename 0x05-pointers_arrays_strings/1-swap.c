#include "main.h"
#include <stdio.h>

/**
 * swap_int- Function to swap the values of two integers
 * @a: Pointer to first integer
 * @b: Pointer the second integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
