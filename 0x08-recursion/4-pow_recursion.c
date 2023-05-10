#include "main.h"

/**
 * _pow_recursion - A function that returns the value of x
 *                  Raised to the power of y
 * @x: Value of x
 * @y: Power of y
 * Return: Always 0
 */

int _pow_recursion(int x, int y)

{
	int result = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}
