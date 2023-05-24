#include "function_pointers.h"

/**
 * print_name - A function that prints a name
 * @name: The function to be printed
 * @f: The pointer to the function
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
