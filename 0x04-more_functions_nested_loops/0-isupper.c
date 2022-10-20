#include "main.h"

/**
 * _isupper - check for uppercase letter
 *
 * description: aplhabet
 * @c: an input alphabet
 *
 * Return: retturn 1 or 0
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		_putchar(1);
	}
	else
	{
		_putchar(0);
	}

	return (0);
}

