#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, result = 0;
	int i = 0, j = 0;

	if (b == NULL)
		return (0);

	while (*(b + len) != '\0')
		len++;

	for (i = (len - 1), j = 0; i >= 0; i--, j++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result += (b[i] - '0') * _pow_recursion(2, j);
	}

	return (result);
}
/**
 * _pow_recursion - Function that returns the factorial of a given number
 * @x: Base
 * @y: Power
 *
 * Return: Result of x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
