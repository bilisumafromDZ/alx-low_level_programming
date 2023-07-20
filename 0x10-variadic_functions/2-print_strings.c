#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include<stdlib.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list arguments;
	char *p;

	va_start(arguments, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(arguments, char *);
		if (p == NULL)
			printf("(nil)");
		else
			printf("%s", p);

		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(arguments);
}
