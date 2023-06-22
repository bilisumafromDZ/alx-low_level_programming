#include"main.h"

/**
 *  _isupper: checks is the letter is capital letter
 *  @c: is parameter to checked
 *
 *  Return: 1 for capital letter and 0 for other
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
